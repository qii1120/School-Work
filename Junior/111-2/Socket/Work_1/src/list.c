#include "myhdr.h"

List *initList()
{
    List *list = (List *)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node *initNode()
{
    Node *node = (Node *)malloc(sizeof(Node));
    pipe(node->pipe);
    node->count = -1;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
Node *addNode(List *list, int count)
{
    if (list == NULL)
        return NULL;
    Node *node = initNode();
    node->count = count;
    if (list->head == NULL)
    {
        list->head = node;
        list->tail = node;
        return node;
    }
    Node *tmp = list->head;
    while (tmp != NULL)
    {
        if (node->count < list->head->count)
        {
            node->next = list->head;
            list->head->prev = node;
            list->head = node;
            return node;
        }
        else if (tmp->next == NULL && tmp->count < node->count)
        {
            tmp->next = node;
            node->prev = tmp;
            list->tail = node;
            return node;
        }
        else if ((tmp->count < node->count) && (tmp->next->count > node->count))
        {
            tmp->next->prev = node;
            node->next = tmp->next;
            tmp->next = node;
            node->prev = tmp;
            return node;
        }
        tmp = tmp->next;
    }
    return NULL;
}

int deletefromhead(List *list)
{
    if (list == NULL || list->head == NULL)
        return 0;
    close(list->head->pipe[0]);
    close(list->head->pipe[1]);
    Node *node = list->head;
    if (list->head->next == NULL)
    {
        list->head = list->tail = NULL;
        return 1;
    }
    list->head = list->head->next;
    list->head->prev = NULL;
    free(node);
    return 1;
}

void deductCount(List *list)
{
    Node *tmp = list->head;
    // if(tmp) printf("head counter is %d\n", tmp->count);
    while (tmp != NULL)
    {
        // printf("%d\n", tmp->count);
        tmp->count--;
        tmp = tmp->next;
    }
}
// int main()
// {
//     List *list = initList();
//     // if(list->head == NULL) printf("list head is NULL\n");
//     printf("%d\n", addNode(list, 4));
//     printf("%d\n", addNode(list, 2));
//     printf("%d\n", addNode(list, 3));
//     printf("%d\n", addNode(list, 1));
//     printf("%d\n", addNode(list, 6));
//     printf("%d\n", addNode(list, 5));
//     printf("%d\n", deletefromhead(list));
//     printf("%d\n", deletefromhead(list));
//     printf("%d\n", deletefromhead(list));
//     printf("%d\n", deletefromhead(list));
//     printf("%d\n", deletefromhead(list));
//     printf("%d\n", deletefromhead(list));
//     Node *tmp = list->head;
//     while (tmp != NULL)
//     {
//         printf("%d\n", tmp->count);
//         tmp = tmp->next;
//     }

//     return 0;
// }