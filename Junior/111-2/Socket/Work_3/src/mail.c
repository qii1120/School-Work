#include "myhdr.h"
void mail_serve(List *numberPipe, char *buff, Client *client, redisContext *user_DB)
{
    char command[BUFFER_SIZE];
    sscanf(buff, "%s", command);
    if (!strcmp(command, "listMail"))
        list_mail(buff, client, user_DB);
    else if (!strcmp(command, "mailto"))
        mail_to(numberPipe, buff, client, user_DB);
    else if (!strcmp(command, "delMail"))
        delete_mail(buff, client, user_DB);
    return;
}

int is_mail_command(char *command)
{
    if (!strcmp(command, "listMail") || !strcmp(command, "mailto") || !strcmp(command, "delMail"))
        return 1;
    return 0;
}

void list_mail(char *buff, Client *client, redisContext *user_DB)
{
    redisReply *reply = 0;
    reply = redisCommand(user_DB, "LRANGE %s_mail_list 0 -1", client->name);
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        char buf[10 * BUFFER_SIZE], temp[5 * BUFFER_SIZE];
        sprintf(buf, "<id>  <date>              <sender>    <message>\n");
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

void mail_to(List *numberPipe, char *buff, Client *client, redisContext *user_DB)
{
    redisReply *reply = 0;

    time_t cur_time;
    time(&cur_time);
    struct tm *time_info = localtime(&cur_time);
    char timebuf[BUFFER_SIZE], inst[BUFFER_SIZE], id[BUFFER_SIZE], user_name[BUFFER_SIZE], message[5 * BUFFER_SIZE], mail_info[BUFFER_SIZE];
    strftime(timebuf, 20, "%Y-%m-%d %H:%M:%S", time_info);
    sscanf(buff, "%s %s %[^\n]", inst, user_name, message);
    reply = redisCommand(user_DB, "GET %s", user_name);
    if (reply == NULL || reply->type != REDIS_REPLY_STRING)
    {
        write(client->socketfd, "User not found !\n", strlen("User not found !\n"));
        freeReplyObject(reply);
        return;
    }
    freeReplyObject(reply);

    char *redirect = strrchr(buff, '<'); // return the position of the last occurrence
    if (redirect != NULL)
    {
        int fd[2];
        if (pipe(fd) == -1)
            perror("pipe");
        // printf("%s\n", buff + (redirect - buff) + 1);
        strcpy(message, buff + (redirect - buff) + 1);
        shell_cmd(numberPipe, message, fd[1]);
        close(fd[1]);
        read(fd[0], message, sizeof(message));
        close(fd[0]);
    }

    reply = redisCommand(user_DB, "LRANGE %s_mail_list 0 -1", user_name);
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        sscanf(reply->element[0]->str, "%s", id);
        sprintf(id, "%d", atoi(id)+1);
    }
    else if (reply->elements <= 0)
        strcpy(id, "0");
    freeReplyObject(reply);
    sprintf(mail_info, "%-5s %-19s %-11s %s", id, timebuf, client->name, message);

    reply = redisCommand(user_DB, "LPUSH %s_mail_list %s", user_name, mail_info);
    if (reply && reply->type == REDIS_REPLY_INTEGER && reply->integer != 0)
        write(client->socketfd, "Send accept !\n", strlen("Send accept !\n"));
    freeReplyObject(reply);
}

void delete_mail(char *buff, Client *client, redisContext *user_DB)
{
    char instruction[BUFFER_SIZE], delete_message[BUFFER_SIZE], id[BUFFER_SIZE], delid[BUFFER_SIZE];
    sscanf(buff, "%s %s", instruction, id);
    redisReply *reply = redisCommand(user_DB, "LRANGE %s_mail_list 0 -1", client->name);
    if (reply->type == REDIS_REPLY_ARRAY && reply->elements > 0)
    {
        for (int i = 0; i < reply->elements; i++)
        {
            sscanf(reply->element[i]->str, "%s", delid);
            if (!strcmp(id, delid))
            {
                strcpy(delete_message, reply->element[i]->str);
                freeReplyObject(reply);
                break;
            }
        }
        reply = redisCommand(user_DB, "LREM %s_mail_list 0 %s", client->name, delete_message);
        if (reply->integer > 0)
            write(client->socketfd, "Delete accept !\n", strlen("Delete accept !\n"));
        else
            write(client->socketfd, "Mail id unexist !\n", strlen("Mail id unexist !\n"));
        freeReplyObject(reply);
    }
    return;
}