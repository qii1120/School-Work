#include "../include/myhdr.h"

int main(int argc, char *argv[])
{
    setenv("PATH", "bin:.:/bin", 1);
    List *numberPipe = initList();
    Client client[BACKLOG];
    int listenfd, child_fifo[BACKLOG], client_fifo[BACKLOG];
    struct sockaddr_in cliaddr;
    for (int i = 0; i < BACKLOG; i++)
    {
        client[i].socketfd = -1;
        client[i].id = i;
        strcpy(client[i].name, "no_name");
        client[i].IP_port[0] = '\0';
        client[i].exist = 0;
    }

    if ((listenfd = bind_listen()) < 0)
        exit(EXIT_SUCCESS);

    int epfd = epoll_create(BACKLOG);
    if (epfd < 0)
    {
        perror("create epoll error");
        exit(EXIT_FAILURE);
    }
    struct epoll_event events[BACKLOG];
    add_event(epfd, listenfd);

    redisContext *user_DB = redisConnect("127.0.0.1", 6379); //default port
    if (user_DB != NULL && user_DB->err){
        printf("Error: %s\n", user_DB->errstr);
        return;
    }
    else
        printf("Connected to Redis\n");


    while (1)
    {
        int i;
        for (i = 0; i < BACKLOG; i++)
            if (!client[i].exist)
                break;

        int count = epoll_wait(epfd, events, BACKLOG, -1);
        if (count < 0)
        {
            perror("epoll_wait failed");
            exit(EXIT_FAILURE);
        }
        // printf("count: %d\n", count);
        for (int j = 0; j < count; j++)
        {
            int sockfd = events[j].data.fd, fd, fd2;
            // printf("%d:%d\n", sockfd, listenfd);
            if (sockfd == listenfd)
            {
                socklen_t clilen = sizeof(cliaddr);
                if ((client[i].socketfd = accept(listenfd, (struct sockaddr *)&cliaddr, &clilen)) < 0)
                {
                    if (errno = EINTR)
                        continue;
                    else
                    {
                        perror("accept error");
                        continue;
                    }
                }
                char temp[BUFFER_SIZE];
                sprintf(temp, "%d", cliaddr.sin_port);
                strcpy(client[i].IP_port, inet_ntoa(cliaddr.sin_addr));
                strcat(client[i].IP_port, ":");
                strcat(client[i].IP_port, temp);
                client[i].exist = 1;
                sprintf(temp, "%d", client[i].id);
                if (mkfifo(temp, 0666) == -1 && errno != EEXIST)
                {
                    perror("mkfifo error");
                    continue;
                }
                char temp2[BUFFER_SIZE] = "server_";
                strcat(temp2, temp);
                if (mkfifo(temp2, 0666) == -1 && errno != EEXIST)
                {
                    perror("mkfifo error");
                    continue;
                }

                char *name = login(client[i].socketfd, user_DB);
                printf("%s\n", name);
                strcpy(client[i].name, name);
                pid_t childpid;
                if ((childpid = fork()) == 0)
                {                    // child process
                    close(listenfd); // close listening socket in child process
                    // fd = open(temp, O_RDONLY);
                    // fd = open(temp2, O_WRONLY);
                    for (int k = 0; k < BACKLOG; k++)
                        if (client[k].exist && k != i)
                            close(client[k].socketfd);
                    shell(numberPipe, &client[i], user_DB);
                    exit(0);
                }
                else if (childpid > 0)
                {
                    fd = open(temp2, O_RDONLY | O_NONBLOCK);
                    // printf("open count %d\n", count);
                    add_event(epfd, fd);
                    // close(client[i].socketfd);
                }
            }
            else
            {
                char buf[BUFFER_SIZE];
                char command[BUFFER_SIZE];
                char temp[BUFFER_SIZE];
                char id[BUFFER_SIZE];
                char tmp_name[BUFFER_SIZE];
                char someone[BUFFER_SIZE];
                int n = read(sockfd, buf, BUFFER_SIZE);
                if (n < 0 && errno == EAGAIN)
                {
                    j = j - 1;
                    continue;
                }
                else if (n == 0)
                {
                    continue;
                }
                else
                {
                    buf[n] = '\0';
                    if (sscanf(buf, "%s %s", command, id) == 2 && !strcmp(command, "who"))
                    {
                        int idd = atoi(id);
                        write_who(idd, client);
                    }
                    else if (sscanf(buf, "%s %s %s", command, tmp_name, id) == 3 && !strcmp(command, "name"))
                    {
                        int idd = atoi(id);
                        strcpy(client[idd].name, tmp_name);
                        int fd = open(id, O_WRONLY);
                        if (fd < 0)
                            perror("open error");
                        strcpy(buf, "name change accept!\n");
                        write(fd, buf, strlen(buf));
                        close(fd);
                    }
                    else if (sscanf(buf, "%s %s", command, id) == 2 && !strcmp(command, "yell"))
                    {
                        int idd = atoi(id);
                        int fd = open(id, O_WRONLY);
                        if (fd < 0)
                            perror("open error");
                        strcpy(tmp_name, buf + 2 + strlen(command) + strlen(id));
                        sprintf(buf, "<user(%s) yelled>: %s\n", id, tmp_name);
                        write(fd, buf, strlen(buf));
                        close(fd);
                        for (int k = 0; k < BACKLOG; k++)
                        {
                            if (client[k].exist && k != idd)
                            {
                                int nn = write(client[k].socketfd, buf, strlen(buf));
                                char tmp[BUFFER_SIZE];
                                sprintf(tmp, "(%s)%% ", client[k].name);
                                write(client[k].socketfd, tmp, strlen(tmp));
                                if (nn < 0)
                                {
                                    perror("write");
                                }
                            }
                        }
                    }
                    else if (sscanf(buf, "%s %s %s", id, command, someone) == 3 && !strcmp(command, "tell"))
                    {
                        int idd = atoi(id), someid = atoi(someone);
                        int fd = open(id, O_WRONLY);
                        char tmp[BUFFER_SIZE];
                        sprintf(tmp, "(%s)%% ", client[someid].name);
                        if (fd < 0)
                            perror("open error");
                        strcpy(tmp_name, buf + 3 + strlen(command) + strlen(id) + strlen(someone));
                        sprintf(buf, "<user(%s) told you: %s\n", id, tmp_name);
                        write(client[someid].socketfd, buf, strlen(buf));
                        write(client[someid].socketfd, tmp, strlen(tmp));
                        strcpy(buf, "send accept!\n");
                        write(fd, buf, 13);
                        close(fd);
                    }
                    else if (sscanf(buf, "%s %s", command, id) == 2 && !strcmp(command, "quit"))
                    {
                        int idd = atoi(id);
                        int fd = close(client[idd].socketfd);
                        // if(fd < 0) perror("close");
                        client[idd].socketfd = -1;
                        strcpy(client[idd].name, "no_name");
                        client[idd].IP_port[0] = '\0';
                        client[idd].exist = 0;
                        close(sockfd);
                    }
                }
            }
        }
    }
    return 0;
}