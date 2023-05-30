#include "myhdr.h"

int bind_listen()
{
    int listenfd;
    struct sockaddr_in servaddr;

    // set_signal_action();

    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("socket error");
        return -1;
    }

    int val = 1;
    /*set SO_REUSEPORT*/
    if (setsockopt(listenfd, SOL_SOCKET, SO_REUSEPORT, &val, sizeof(val)) < 0)
    {
        perror("setsockopt()");
        return -1;
    }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERV_PORT);

    if (bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0)
    {
        perror("bind error");
        return -1;
    }

    if (listen(listenfd, BACKLOG) != 0)
    {
        perror("listen error");
        return -1;
    }

    return listenfd;
}

void add_event(int epfd, int fd)
{
    struct epoll_event event;
    event.data.fd = fd;
    event.events = EPOLLIN | EPOLLET;
    epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event); // add items to epoll list
}

void write_who(int idd, Client *client)
{
    char buf[BUFFER_SIZE], temp[BUFFER_SIZE], id[BUFFER_SIZE];
    sprintf(id, "%d", idd);
    // close(sockfd)
    int fd = open(id, O_WRONLY);
    if (fd < 0)
        perror("open error");
    char who_id[BUFFER_SIZE];
    // printf("%s %s\n", command, who_id);
    sprintf(buf, "<ID>    <name>      <IP:port>         <indicate me>\n");
    // strcat(buff,"\n");
    for (int i = 0; i < BACKLOG; i++)
    {
        if (client[i].exist)
        {
            sprintf(who_id, "%d", client[i].id);
            sprintf(temp, "%4d    %-11s %-18s", client[i].id, client[i].name, client[i].IP_port);
            strcat(temp, !strcmp(id, who_id) ? "<-(me)\n\0" : "\n\0");
            strcat(buf, temp);
        }
    }
    write(fd, buf, strlen(buf));
    close(fd);
}
