#include <sys/wait.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 256
#endif

#define PipeList struct _PipeList
#define Node struct _Node
#define List struct _List
#define DoubleListNode struct _DoubleListNode
#define DoubleList struct _DoubleList


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

PipeList getPipe(char *str);
List *initList();
Node *addNode(List *list, int count);
DoubleList *initDoubleList();
DoubleListNode *addDoubleListNode(DoubleList *list, char *name);
int deletefromhead(List *list);
void printENV(char *name);
void deductCount(List *list);
DoubleList *readDir();
char **getArgu(char *command);