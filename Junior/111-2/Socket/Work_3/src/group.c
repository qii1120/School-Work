#include "myhdr.h"
void group_serve(char *buff, Client *client, redisContext *user_DB)
{
    char command[BUFFER_SIZE];
    sscanf(buff, "%s", command);
    if (!strcmp(command, "gyell"))
        gyell(buff, client, user_DB);
    else if (!strcmp(command, "createGroup"))
        createGroup(buff, client, user_DB);
    else if (!strcmp(command, "delGroup"))
        delGroup(buff, client, user_DB);
    else if (!strcmp(command, "addTo"))
        addTo(buff, client, user_DB);
    else if (!strcmp(command, "leaveGroup"))
        leaveGroup(buff, client, user_DB);
    else if (!strcmp(command, "remove"))
        remove_user(buff, client, user_DB);
    else if (!strcmp(command, "listGroup"))
        listGroup(buff, client, user_DB);
    return;
}

int is_group_command(char *command)
{
    if (!strcmp(command, "gyell") || !strcmp(command, "createGroup") || !strcmp(command, "delGroup") || !strcmp(command, "addTo") || !strcmp(command, "leaveGroup") || !strcmp(command, "remove") || !strcmp(command, "listGroup"))
        return 1;
    return 0;
}

void createGroup(char *buff, Client *client, redisContext *user_DB)
{
    char groupName[BUFFER_SIZE], command[BUFFER_SIZE], group_info[BUFFER_SIZE];
    sscanf(buff, "%s %[^\n]", command, groupName);

    redisReply *reply = redisCommand(user_DB, "LRANGE group_list 0 -1");
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        char owner[BUFFER_SIZE], group[BUFFER_SIZE];
        for (int i = 0; i < reply->elements; i++)
        {
            sscanf(reply->element[i]->str, "%s %s", owner, group);
            if (!strcmp(group, groupName))
            {
                write(client->socketfd, "Group already exist !\n", strlen("Group already exist !\n"));
                freeReplyObject(reply);
                return;
            }
        }
    }
    freeReplyObject(reply);

    sprintf(group_info, "%-15s %s", client->name, groupName);
    reply = redisCommand(user_DB, "LPUSH group_list %s", group_info);
    if (reply && reply->type == REDIS_REPLY_INTEGER)
        write(client->socketfd, "Create success !\n", strlen("Create success !\n"));
    freeReplyObject(reply);
    reply = redisCommand(user_DB, "LPUSH %s_group %s", groupName, client->name);
    freeReplyObject(reply);
}

void listGroup(char *buff, Client *client, redisContext *user_DB)
{
    redisReply *reply = redisCommand(user_DB, "LRANGE group_list 0 -1");
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        char buf[5 * BUFFER_SIZE], temp[BUFFER_SIZE];
        sprintf(buf, "<owner>        <group>\n");
        for (int i = 0; i < reply->elements; i++)
        {
            sprintf(temp, "%s\n", reply->element[i]->str);
            strcat(buf, temp);
        }
        write(client->socketfd, buf, strlen(buf));
    }
    else if (reply->elements <= 0)
        write(client->socketfd, "Empty !\n", strlen("Empty !\n"));
    freeReplyObject(reply);
}

void delGroup(char *buff, Client *client, redisContext *user_DB)
{
    char groupName[BUFFER_SIZE], command[BUFFER_SIZE];
    sscanf(buff, "%s %[^\n]", command, groupName);
    redisReply *reply = redisCommand(user_DB, "LRANGE group_list 0 -1");
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        char owner[BUFFER_SIZE], group[BUFFER_SIZE], info[BUFFER_SIZE];
        for (int i = 0; i < reply->elements; i++)
        {
            sscanf(reply->element[i]->str, "%s %s", owner, group);
            strcpy(info, reply->element[i]->str);
            if (!strcmp(group, groupName))
            {
                if (!strcmp(owner, client->name))
                {
                    freeReplyObject(reply);
                    reply = redisCommand(user_DB, "LREM group_list 0 %s", info);
                    freeReplyObject(reply);
                    reply = redisCommand(user_DB, "DEL %s_group", groupName);
                    freeReplyObject(reply);
                    write(client->socketfd, "Group delete success !\n", strlen("Group delete success !\n"));
                }
                else
                    write(client->socketfd, "You don't have permission !\n", strlen("You don't have permission !\n"));
                return;
            }
        }
        write(client->socketfd, "Group not found !\n", strlen("Group not found !\n"));
    }
}

void addTo(char *buff, Client *client, redisContext *user_DB)
{
    char *name, groupName[BUFFER_SIZE], command[BUFFER_SIZE], user_in[100][BUFFER_SIZE], user_add[100][BUFFER_SIZE], user_not_found[100][BUFFER_SIZE];
    int in = 0, add = 0, not_found = 0;
    sscanf(buff, "%s %s", command, groupName);
    redisReply *reply = redisCommand(user_DB, "LRANGE %s_group 0 -1", groupName), *reply_user, *reply_add;

    name = buff + strlen(command) + strlen(groupName) + 2;
    while (sscanf(name, "%s", command) && (name - buff) < strlen(buff)) // the command here is the name after group
    {
        // printf("command %s\n", command);
        if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
        {
            if (strcmp(reply->element[reply->elements - 1]->str, client->name))
            {
                write(client->socketfd, "You don't have permissions !\n", strlen("You don't have permissions !\n"));
                freeReplyObject(reply);
                return;
            }
            else if (!strcmp(reply->element[reply->elements - 1]->str, client->name))
            {
                reply_user = redisCommand(user_DB, "GET %s", command);
                // printf("%d\n", reply_user->type);
                if (reply_user->type != REDIS_REPLY_STRING)
                { // user not found
                    sprintf(user_not_found[not_found++], "%s ", command);
                    freeReplyObject(reply_user);
                    name = name + strlen(command) + 1;
                    continue;
                }
                else
                { // the user is exist
                    int exist = 0;
                    for (int i = 0; i < reply->elements; i++)
                    { // the user is exist in the group
                        // printf("in group: %s\n", reply->element[i]->str);
                        if (!strcmp(command, reply->element[i]->str))
                        {
                            sprintf(user_in[in++], "%s ", command);
                            freeReplyObject(reply_user);
                            exist = 1;
                            break;
                        }
                    }
                    // user is not in the group
                    if (!exist)
                    {
                        reply_add = redisCommand(user_DB, "LPUSH %s_group %s", groupName, command);
                        sprintf(user_add[add++], "%s ", command);
                        freeReplyObject(reply_add);
                    }
                }
            }
        }
        else if (reply->elements <= 0)
        {
            write(client->socketfd, "Group not found !\n", strlen("Group not found !\n"));
            freeReplyObject(reply);
            return;
        }
        name = name + strlen(command) + 1;
    }
    freeReplyObject(reply);
    // printf("ouside\n");
    for (int i = 0; i < not_found; i++)
        write(client->socketfd, user_not_found[i], strlen(user_not_found[i]));
    if (not_found)
        write(client->socketfd, "not found !\n", strlen("not found !\n"));
    for (int i = 0; i < in; i++)
        write(client->socketfd, user_in[i], strlen(user_in[i]));
    if (in)
        write(client->socketfd, "already in group !\n", strlen("already in group !\n"));
    for (int i = 0; i < add; i++)
        write(client->socketfd, user_add[i], strlen(user_add[i]));
    if (add)
        write(client->socketfd, "add success !\n", strlen("add success !\n"));
}

void gyell(char *buff, Client *client, redisContext *user_DB)
{
    char groupName[BUFFER_SIZE], command[BUFFER_SIZE], message[BUFFER_SIZE], temp[BUFFER_SIZE] = "server_", gyell_msg[BUFFER_SIZE], id[BUFFER_SIZE];
    sscanf(buff, "%s %s %[^\n]", command, groupName, message);
    sprintf(gyell_msg, "%s %d %s %s %s", command, client->id, client->name, groupName, message);
    sprintf(id, "%d", client->id);
    strcat(temp, id);
    int fd = open(temp, O_WRONLY);
    write(fd, gyell_msg, strlen(gyell_msg));
    close(fd);
    while ((fd = open(id, O_RDONLY)) && ((fd < 0) && (errno == EAGAIN)))
        ;
    int n;
    while ((n = read(fd, gyell_msg, BUFFER_SIZE)) && ((n < 0) && (errno == EAGAIN)))
        ;
    gyell_msg[n] = '\0';
    close(fd);
    write(client->socketfd, gyell_msg, strlen(gyell_msg));
}

void leaveGroup(char *buff, Client *client, redisContext *user_DB)
{
    char groupName[BUFFER_SIZE], command[BUFFER_SIZE];
    sscanf(buff, "%s %s", command, groupName);
    redisReply *reply = redisCommand(user_DB, "LRANGE %s_group 0 -1", groupName);
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        char userName[BUFFER_SIZE];
        for (int i = 0; i < reply->elements; i++)
        {
            strcpy(userName, reply->element[i]->str);
            if (!strcmp(userName, client->name))
            {
                freeReplyObject(reply);
                reply = redisCommand(user_DB, "LREM %s_group 0 %s", groupName, userName);
                freeReplyObject(reply);
                write(client->socketfd, "Leave accept !\n", strlen("Leave accept !\n"));
                return;
            }
        }
        freeReplyObject(reply);
        write(client->socketfd, "Leave fault !\n", strlen("Leave fault !\n"));
        return;
    }
    else if (reply->elements <= 0)
        write(client->socketfd, "Group not found !\n", strlen("Group not found !\n"));
    freeReplyObject(reply);
}

void remove_user(char *buff, Client *client, redisContext *user_DB)
{
    char *name, groupName[BUFFER_SIZE], command[BUFFER_SIZE], user_remove[100][BUFFER_SIZE], user_notin[100][BUFFER_SIZE], user_not_found[100][BUFFER_SIZE];
    int rm = 0, notin = 0, not_found = 0;
    sscanf(buff, "%s %s", command, groupName);
    redisReply *reply = redisCommand(user_DB, "LRANGE %s_group 0 -1", groupName), *reply_user, *reply_remove;

    name = buff + strlen(command) + strlen(groupName) + 2;
    while (sscanf(name, "%s", command) && (name - buff) < strlen(buff)) // the command here is the name after group
    {
        // printf("command %s\n", command);
        if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
        {
            if (strcmp(reply->element[reply->elements - 1]->str, client->name))
            {
                write(client->socketfd, "You don't have permissions !\n", strlen("You don't have permissions !\n"));
                freeReplyObject(reply);
                return;
            }
            else if (!strcmp(reply->element[reply->elements - 1]->str, client->name))
            {
                reply_user = redisCommand(user_DB, "GET %s", command);
                // printf("%d\n", reply_user->type);
                if (reply_user->type != REDIS_REPLY_STRING)
                { // user not found
                    sprintf(user_not_found[not_found++], "%s ", command);
                    freeReplyObject(reply_user);
                    name = name + strlen(command) + 1;
                    continue;
                }
                else
                { // the user is exist
                    int exist = 0;
                    for (int i = 0; i < reply->elements; i++)
                    { // the user is exist in the group
                        // printf("in group: %s\n", reply->element[i]->str);
                        if (!strcmp(command, reply->element[i]->str))
                        {
                            sprintf(user_remove[rm++], "%s ", command);
                            freeReplyObject(reply_user);
                            reply_remove = redisCommand(user_DB, "LREM %s_group 0 %s", groupName, command);
                            exist = 1;
                            freeReplyObject(reply_remove);
                            break;
                        }
                    }
                    // user is not in the group
                    if (!exist)
                        sprintf(user_notin[notin++], "%s ", command);
                }
            }
        }
        else if (reply->elements <= 0)
        {
            write(client->socketfd, "Group not found !\n", strlen("Group not found !\n"));
            freeReplyObject(reply);
            return;
        }
        name = name + strlen(command) + 1;
    }
    freeReplyObject(reply);
    // printf("ouside\n");
    for (int i = 0; i < not_found; i++)
        write(client->socketfd, user_not_found[i], strlen(user_not_found[i]));
    if (not_found)
        write(client->socketfd, "not found !\n", strlen("not found !\n"));
    for (int i = 0; i < notin; i++)
        write(client->socketfd, user_notin[i], strlen(user_notin[i]));
    if (notin)
        write(client->socketfd, "is not in group !\n", strlen("is not in group !\n"));
    for (int i = 0; i < rm; i++)
        write(client->socketfd, user_remove[i], strlen(user_remove[i]));
    if (rm)
        write(client->socketfd, "remove success !\n", strlen("remove success !\n"));
}