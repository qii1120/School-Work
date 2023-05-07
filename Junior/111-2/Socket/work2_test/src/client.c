#include "myhdr.h"
/*
void handle()
{
    char buff[BUFFER_SIZE];
    char temp[BUFFER_SIZE];
    char command[BUFFER_SIZE];
    char id[BUFFER_SIZE];
    struct epoll_event event;
    for (int j = 0; j < BACKLOG && client[j].exist; j++)
    {
        sprintf(id, "%d", client[j].id);
        int fd = open(id, O_RDONLY | O_NONBLOCK), n;
        event.data.fd = fd;
        event.events = EPOLLIN;
        int epfd = epoll_create(BACKLOG);
        int ret = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event);
        if (ret != 0)
        {
            close(fd);
            close(epfd);
            exit(0);
        }
        printf("main %d\n", fd);
        while ((n = read(fd, buff, BUFFER_SIZE)) > 0)
        {
            printf("main %s %d\n", buff, n);
            buff[n] = '\0';
            close(fd);
            fd = open(id, O_WRONLY);
            // printf("mainn %s %d\n", buff, strlen(buff));
            // printf("%d\n", sscanf(buff, "%s", command));
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
}*/

void client_serve(char *buff, Client *client)
{
    char command[BUFFER_SIZE];
    sscanf(buff, "%s", command);
    if (!strcmp(command, "who"))
        who(buff, client);
    return;
}

int is_client_command(char *command)
{
    if (!strcmp(command, "who") || !strcmp(command, "tell") || !strcmp(command, "yell") || !strcmp(command, "name"))
        return 1;
    return 0;
}

void who(char *buff, Client *client)
{
    char command[BUFFER_SIZE];
    char id[BUFFER_SIZE];
    char buffer[BUFFER_SIZE];
    sprintf(id, "%d", client->id);
    sscanf(buff, "%s", command);
    strcat(command, " ");
    strcat(command, id);
    printf("whoo %s %d\n", command, strlen(command));
    int fd = open(id, O_WRONLY);
    write(fd, command, 4 + strlen(id));
    printf("who %d\n", fd);
    close(fd);
    again:
    fd = open(id, O_RDONLY);
    if(fd < 0 && errno == EAGAIN) goto again;
    printf("whord %d\n", fd);
    read_again:
    int n = read(fd, buffer, BUFFER_SIZE);
    if(n < 0 && errno == EAGAIN) goto read_again;
    buffer[n] = '\0';
    printf("mainn %s\n", buffer);
    close(fd);
    write(client->socketfd, buffer, strlen(buffer));
}

// Client_List *initClientList()
// {
//     Client_List *list = (Client_List *)malloc(sizeof(Client_List));
//     list->head=NULL;
//     list->tail=NULL;
//     return list;
// }

// Client *initClient()
// {
//     Client *client = (Client *)malloc(sizeof(Client));
//     strcpy(client->name, "no_name");
//     client->addr_len = sizeof(client->addr);
//     client->next=NULL;
//     client->prev=NULL;
//     return client;
// }

// Client *addClient(Client_List *list, Client *client)
// {
//     if (list == NULL)
//         return NULL;
//     if (list->head == NULL)
//     {
//         client->id = 0;
//         list->head = client;
//         list->tail = client;
//         return client;
//     }
//     Client *tmp = list->head;
//     int cnt = 0;
//     while (tmp != NULL)
//     {
//         cnt++;
//         if(cnt >= BACKLOG)
//         {
//             close(client->socketfd);
//             free(client);
//             return NULL;
//         }
//         if (tmp->next == NULL)
//         {
//             client->id = cnt;
//             tmp->next = client;
//             client->prev = tmp;
//             list->tail = client;
//             return client;
//         }
//         tmp = tmp->next;
//     }
//     return NULL;
// }

// void removeClient(Client_List *list, Client *client)
// {
//     if (list == NULL)
//         return ;
//     if(list->head == client && list->tail == client)
//     {
//         list->head = NULL;
//         list->tail = NULL;
//         free(client);
//         return ;
//     }
//     else if(list->head == client && list->tail != client)
//     {
//         list->head = client->next;
//         client->next->prev = NULL;
//         free(client);
//         return ;
//     }
//     else if(list->head != client && list->tail == client)
//     {
//         list->tail = client->prev;
//         client->prev->next = NULL;
//         free(client);
//         return ;
//     }
//     else
//     {
//         Client *tmp = list->head;
//         int cnt = 0;
//         while (tmp != NULL)
//         {
//             tmp->id = cnt;
//             tmp = tmp->next;
//             cnt++;
//         }
//         return ;
//     }

// }