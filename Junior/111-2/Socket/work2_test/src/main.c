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
        printf("count: %d\n", count);
        for (int j = 0; j < count; j++)
        {
            int sockfd = events[j].data.fd, fd;
            printf("%d:%d\n", sockfd, listenfd);
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
                // for (int j = 0; j < BACKLOG; j++)
                //     printf("%d %d %s %s %d\n", client[j].socketfd, client[j].id, client[j].name, client[j].IP_port, client[j].exist);
                // printf("\n");
                pid_t childpid;
                if ((childpid = fork()) == 0)
                {                    // child process
                    close(listenfd); // close listening socket in child process

                    shell(numberPipe, &client[i]);
                    continue;
                }
                else if (childpid > 0)
                {
                    fd = open(temp, O_RDONLY | O_NONBLOCK);
                    printf("open count %d\n", count);
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

                int n = read(sockfd, buf, BUFFER_SIZE);
                if (n < 0 && errno == EAGAIN)
                {
                    j=j-1;
                    continue;
                }
                else if (n == 0)
                {
                    close(sockfd);
                }
                else
                {
                    if (sscanf(buf, "%s %s", command, id) == 2 && !strcmp(command, "who"))
                    {
                        buf[n] = '\0';
                        printf("main %s %s\n", buf, id);
                        //close(sockfd);
                        int fd = open(id, O_WRONLY );
                        if(fd < 0) perror("open error");
                        printf("main fd %d\n", fd);
                        char who_id[BUFFER_SIZE], temp_id[BUFFER_SIZE];
                        //printf("%s %s\n", command, who_id);
                        sprintf(buf, "<ID>    <name>      <IP:port>         <indicate me>\n");
                        // strcat(buff,"\n");
                        sprintf(temp, "%4d    %-11s %-18s", client[j].id, client[j].name, client[j].IP_port);
                        strcat(temp, (!strcmp(who_id, temp_id)) ? "<-(me)\n\0" : "\n\0");
                        strcat(buf, temp);
                        write(fd, buf, strlen(buf));
                        // sprintf(buff, "%4d    %11s %18s", client[j].id, client[j].name, client[j].IP_port);
                        // strcat(buff,"\n");
                        // write(fd, buff, strlen(buff));
                    }
                }
            }
        }
        /*
        else if (childpid > 0)
        {

            char buff[BUFFER_SIZE];
            char temp[BUFFER_SIZE];
            char command[BUFFER_SIZE];
            char id[BUFFER_SIZE];
            for (int j = 0; j < BACKLOG && client[j].exist; j++)
            {
                sprintf(id, "%d", client[j].id);
                int fd = open(id, O_RDONLY), n;
                printf("main %d\n", fd);
                while ((n = read(fd, buff, BUFFER_SIZE)) > 0)
                {
                    printf("main %s %d\n", buff, n);
                    buff[n] = '\0';
                    close(fd);
                    fd = open(id, O_WRONLY);
                    char who_id[BUFFER_SIZE], temp_id[BUFFER_SIZE];
                    sprintf(temp_id, "%d", j);
                    if ((sscanf(buff, "%s %s", command, who_id) == 2) && strcmp(command, "who") == 0)
                    {
                        printf("%s %s\n", command, who_id);
                        sprintf(buff, "<ID>    <name>      <IP:port>         <indicate me>\n");
                        // strcat(buff,"\n");
                        sprintf(temp, "%4d    %-11s %-18s", client[j].id, client[j].name, client[j].IP_port);
                        strcat(temp, (!strcmp(who_id, temp_id)) ? "<-(me)\n\0" : "\n\0");
                        strcat(buff, temp);
                        write(fd, buff, strlen(buff));
                        // sprintf(buff, "%4d    %11s %18s", client[j].id, client[j].name, client[j].IP_port);
                        // strcat(buff,"\n");
                        // write(fd, buff, strlen(buff));
                    }
                    close(fd);
                }
            }
        }
        */
        close(client[i].socketfd); // close connected socket in parent process
    }
    return 0;
}