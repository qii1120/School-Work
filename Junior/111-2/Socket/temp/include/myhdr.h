#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <bits/sigaction.h>
#include <signal.h>

#ifndef SERV_PORT
#define SERV_PORT 9877
#endif

#ifndef BACKLOG
#define BACKLOG 100
#endif

#ifndef MAXLINE
#define MAXLINE 256
#endif

#define Client struct _Client
#define Client_List struct _Client_List

struct _Client
{
    int socketfd;
    int id;
    char name[64];
    struct sockaddr_in addr;
    socklen_t addr_len;
    Client *next;
    Client *prev;
} ;


struct _Client_List
{
    Client *head;
    Client *tail;
} ;

Client_List *initClientList();
Client *initClient();
Client *addClient(Client_List *list, Client *client);
void removeClient(Client_List *list, Client *client);