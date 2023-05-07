#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
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


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 256
#endif

#ifndef SERV_PORT
#define SERV_PORT 9877
#endif

#ifndef BACKLOG
#define BACKLOG 15
#endif

#define PipeList struct _PipeList
#define Node struct _Node
#define List struct _List
#define DoubleListNode struct _DoubleListNode
#define DoubleList struct _DoubleList
#define Client struct _Client
#define Client_List struct _Client_List


struct _PipeList
{
    int count;
    char arg[BUFFER_SIZE][BUFFER_SIZE];
    char pipeCommands[BUFFER_SIZE][BUFFER_SIZE];
};

struct _Node
{
    int count;
    int pipe[2];
    Node *next;
    Node *prev;
};

struct _List
{
    Node *head;
    Node *tail;
};

struct _DoubleListNode
{
    char *name;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleList *children;
};

struct _DoubleList
{
    DoubleListNode *head;
    DoubleListNode *tail;
};

struct _Client
{
    int socketfd;
    int id;
    char name[64];
    char IP_port[32];
    int exist;
} ;


struct _Client_List
{
    Client *head;
    Client *tail;
} ;

PipeList getPipe(char *str, int a);
List *initList();
Node *addNode(List *list, int count);
DoubleList *initDoubleList();
DoubleListNode *addDoubleListNode(DoubleList *list, char *name);
int deletefromhead(List *list);
void printENV(char *name, int fd);
void deductCount(List *list);
DoubleList *readDir();
char **getArgu(char *command);
int is_command(char *command);
Client_List *initClientList();
Client *initClient();
Client *addClient(Client_List *list, Client *client);
void removeClient(Client_List *list, Client *client);
void client(char *buff, Client *client);
void who(char *buff, Client *client);