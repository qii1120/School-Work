#include "myhdr.h"

int bind_listen()
{
    int listenfd;
    struct sockaddr_in servaddr;

    set_signal_action();

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
    epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event); //add items to epoll list
}