#include "myhdr.h"

DoubleList *initDoubleList()
{
    DoubleList *list = (DoubleList *)malloc(sizeof(DoubleList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

DoubleListNode *initDoubleListNode()
{
    DoubleListNode *node = (DoubleListNode *)malloc(sizeof(DoubleListNode));
    node->children = initDoubleList();
    node->name = NULL;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
DoubleListNode *addDoubleListNode(DoubleList *list, char *name)
{
    if (list == NULL)
        return NULL;
    DoubleListNode *node = initDoubleListNode();
    node->name = name;
    if (list->head == NULL)
    {
        list->head = node;
        list->tail = node;
        return node;
    }
    DoubleListNode *tmp = list->head;
    while (tmp != NULL)
    {
        if (tmp->next == NULL)
        {
            tmp->next = node;
            node->prev = tmp;
            list->tail = node;
            return node;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void printEnv(char *name, int fd)
{
    char *buf, *result;
    buf = getenv(name);
    if (buf)
    {
        sprintf(result, "\t%s\n\0", buf);
        writen(fd, result, strlen(result));
    }
}

void setEnv(char *name, char *value, int fd)
{
    char *buf = getenv(name), *result;

    if (!buf)
    {
        setenv(name, value, 1);
    }
    else
    {
        strcat(buf, ":");
        strcat(buf, value);
        sprintf(result, "\t%s\n\0", buf);
        writen(fd, result, strlen(result));
        setenv(name, buf, 1);
    }
}
// int deletefromhead(List *list)
// {
//     if(list ==NULL || list->head ==NULL) return 0;
//     close(list->head->pipe[0]);
//     close(list->head->pipe[1]);
//     Node *node = list->head;
//     if(list->head->next ==NULL)
//     {
//         list->head = list->tail = NULL;
//         return 1;
//     }
//     list->head = list->head->next;
//     list->head->prev = NULL;
//     free(node);
//     return 1;
// }
// int main()
// {
//     EnvList *list = initEnvList();
//     // if(list->head == NULL) printf("list head is NULL\n");
//     addEnvNode(list, "PATH");
//     addEnvNode(list, "Hi");
//     addEnvNode(list, "Ls");
//     addEnvNode(list, "yy");
//     addEnvNode(list->head->children, "bin");
//     addEnvNode(list->head->children, "bin/src");
//     addEnvNode(list->head->next->children, "bbin/bin");
//     addEnvNode(list->head->next->children, "/bin");

//     // printf("%d\n", addEnvNode(list, 6));
//     // printf("%d\n", addEnvNode(list, 5));
//     EnvNode *tmp = list->head;
//     while (tmp != NULL)
//     {
//         printf("%s\n", tmp->name);
//         EnvNode *cur = tmp->children->head;
//         while(cur != NULL){
//             printf("children: %s\n", cur->name);
//             cur = cur->next;
//         }
//         tmp = tmp->next;
//     }

//     return 0;
// }