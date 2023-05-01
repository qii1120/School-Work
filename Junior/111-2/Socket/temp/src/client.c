#include "myhdr.h"

Client_List *initClientList()
{
    Client_List *list = (Client_List *)malloc(sizeof(Client_List));
    list->head=NULL;
    list->tail=NULL;
    return list;
}

Client *initClient()
{
    Client *client = (Client *)malloc(sizeof(Client));
    strcpy(client->name, "no_name");
    client->addr_len = sizeof(client->addr);
    client->next=NULL;
    client->prev=NULL;
    return client;
}

Client *addClient(Client_List *list, Client *client)
{
    if (list == NULL)
        return NULL;
    if (list->head == NULL)
    {
        client->id = 0;
        list->head = client;
        list->tail = client;
        return client;
    }
    Client *tmp = list->head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        if(cnt >= BACKLOG)
        {
            close(client->socketfd);
            free(client);
            return NULL;
        }
        if (tmp->next == NULL)
        {
            client->id = cnt;
            tmp->next = client;
            client->prev = tmp;
            list->tail = client;
            return client;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void removeClient(Client_List *list, Client *client)
{
    if (list == NULL)
        return ;
    if(list->head == client && list->tail == client)
    {
        list->head = NULL;
        list->tail = NULL;
        free(client);
        return ;
    }
    else if(list->head == client && list->tail != client)
    {
        list->head = client->next;
        client->next->prev = NULL;
        free(client);
        return ;
    }
    else if(list->head != client && list->tail == client)
    {
        list->tail = client->prev;
        client->prev->next = NULL;
        free(client);
        return ;
    }
    else
    {
        Client *tmp = list->head;
        int cnt = 0;
        while (tmp != NULL)
        {
            tmp->id = cnt;
            tmp = tmp->next;
            cnt++;
        }
        return ;
    }
        
}