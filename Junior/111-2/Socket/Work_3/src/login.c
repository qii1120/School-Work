#include "myhdr.h"

char *user_register(int fd, redisContext *user_DB)
{
    redisReply *reply = 0;
    char name[BUFFER_SIZE], password[BUFFER_SIZE];

    write(fd, "your user name: ", strlen("your user name: "));
    read(fd, name, BUFFER_SIZE);
    write(fd, "your password: ", strlen("your password: "));
    read(fd, password, BUFFER_SIZE);

    int name_len = strlen(name), password_len = strlen(password);
    name[name_len-2] = '\0', password[password_len-2] = '\0';
    reply = redisCommand(user_DB, "GET %s", name);
    if (reply != NULL && reply->type == REDIS_REPLY_STRING){
        write(fd, "Username already exist !\n", strlen("Username already exist !\n"));
        freeReplyObject(reply);
        return user_register(fd, user_DB);
    }
    else{
        reply = redisCommand(user_DB, "SET %s %s", name, password); // key and valued 
        if (reply == NULL){
            write(fd, "ERROR SET\n", strlen("ERROR SET\n"));
            return NULL;
        }
        freeReplyObject(reply);

        write(fd, "Create scucess !\n", strlen("Create scucess !\n"));
        reply = redisCommand(user_DB, "LPUSH user_list %s", name);
        freeReplyObject(reply);

        return login(fd, user_DB);
    }
}
char *create_account(int fd, redisContext *user_DB)
{
    char instr[3];
    write(fd, "Create account or login again ? <1/2> : ", strlen("Create account or login again ? <1/2> : "));
    read(fd, instr, 3);
    instr[1]='\0';
    if(atoi(instr) == 1)
        return user_register(fd, user_DB);
    else if(atoi(instr) == 2)
        return login(fd, user_DB);
}

char *login(int fd, redisContext * user_DB)
{
    redisReply *reply = 0;
    char *name = (char*)malloc(sizeof(char)*BUFFER_SIZE), password[BUFFER_SIZE], buff[BUFFER_SIZE];
    write(fd, "user_name: ", strlen("user_name: "));
    // int n = 
    read(fd, buff, BUFFER_SIZE);
    sscanf(buff, "%s", name);
    write(fd, "password: ", strlen("password: "));
    // n = 
    read(fd, buff, BUFFER_SIZE);
    sscanf(buff, "%s", password);
    reply = redisCommand(user_DB, "GET %s", name);
    if(reply == NULL || reply->type != REDIS_REPLY_STRING)
    {
        write(fd, "User not found !\n", strlen("User not found !\n"));
        freeReplyObject(reply);
        return create_account(fd, user_DB);
    }
    password[strlen(password)] = '\0';
    if(strcmp(reply->str, password) == 0)
    {
        freeReplyObject(reply);
        return name;
    }
    else
    {
        freeReplyObject(reply);
        write(fd, "Password error !\n", strlen("Password error !\n"));
        return login(fd, user_DB);
    }
}