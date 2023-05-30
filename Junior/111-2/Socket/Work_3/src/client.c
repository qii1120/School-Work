#include "myhdr.h"
void client_serve(char *buff, Client *client)
{
    char command[BUFFER_SIZE];
    sscanf(buff, "%s", command);
    if (!strcmp(command, "who"))
        who(buff, client);
    else if (!strcmp(command, "name"))
        name(buff, client);
    else if (!strcmp(command, "yell"))
        yell(buff, client);
    else if (!strcmp(command, "tell"))
        tell(buff, client);
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
    char command[BUFFER_SIZE], id[BUFFER_SIZE], buffer[BUFFER_SIZE], temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id);
    sscanf(buff, "%s", command);
    strcat(command, " ");
    strcat(command, id);
    strcat(temp, id);
    // printf("whoo %s %d\n", command, strlen(command));
    int fd = open(temp, O_WRONLY);
    write(fd, command, 4 + strlen(id));
    close(fd);
again:
    fd = open(id, O_RDONLY);
    if (fd < 0 && errno == EAGAIN)
        goto again;
read_again:
    int n = read(fd, buffer, BUFFER_SIZE);
    if (n < 0 && errno == EAGAIN)
        goto read_again;
    buffer[n] = '\0';
    close(fd);
    write(client->socketfd, buffer, strlen(buffer));
}
void name(char *buff, Client *client)
{
    char command[BUFFER_SIZE], tmp_name[BUFFER_SIZE], id[BUFFER_SIZE], buffer[3 * BUFFER_SIZE], temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id);
    sscanf(buff, "%s %s", command, tmp_name);
    sprintf(buffer, "%s %s %s", command, tmp_name, id);
    strcat(temp, id);
    int fd = open(temp, O_WRONLY);
    write(fd, buffer, 6 + strlen(tmp_name) + strlen(id));
    close(fd);
again:
    fd = open(id, O_RDONLY);
    if (fd < 0 && errno == EAGAIN)
        goto again;
// printf("whord %d\n", fd);
read_again:
    int n = read(fd, buffer, BUFFER_SIZE);
    if (n < 0 && errno == EAGAIN)
        goto read_again;
    buffer[n] = '\0';
    // printf("mainn %s\n", buffer);
    close(fd);
    write(client->socketfd, buffer, strlen(buffer));
}
void yell(char *buff, Client *client)
{
    char command[BUFFER_SIZE], message[BUFFER_SIZE], id[BUFFER_SIZE], buffer[3 * BUFFER_SIZE], temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id); // id
    sscanf(buff, "%s", command);   // command
    char *tmp = buff;
    strcpy(message, tmp + 5); // message
    sprintf(buffer, "%s %s %s", command, id, message);
    strcat(temp, id);
    int fd = open(temp, O_WRONLY);
    write(fd, buffer, 6 + strlen(message) + strlen(id));
    close(fd);
again:
    fd = open(id, O_RDONLY);
    if (fd < 0 && errno == EAGAIN)
        goto again;
read_again:
    int n = read(fd, buffer, BUFFER_SIZE);
    if (n < 0 && errno == EAGAIN)
        goto read_again;
    buffer[n] = '\0';
    close(fd);
    write(client->socketfd, buffer, strlen(buffer));
}

void tell(char *buff, Client *client)
{
    char command[BUFFER_SIZE], message[BUFFER_SIZE], id[BUFFER_SIZE], someone[BUFFER_SIZE], buffer[3 * BUFFER_SIZE], temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id); // id
    sscanf(buff, "%s %s", command, someone);   // command someone
    char *tmp = buff;
    strcpy(message, tmp + 6 + strlen(someone)); // message
    sprintf(buffer, "%s %s %s %s", id, command, someone, message);
    strcat(temp, id);
    int fd = open(temp, O_WRONLY);
    write(fd, buffer, 7 + strlen(someone) + strlen(message) + strlen(id));
    close(fd);
again:
    fd = open(id, O_RDONLY);
    if (fd < 0 && errno == EAGAIN)
        goto again;
read_again:
    int n = read(fd, buffer, BUFFER_SIZE);
    if (n < 0 && errno == EAGAIN)
        goto read_again;
    buffer[n] = '\0';
    close(fd);
    write(client->socketfd, buffer, strlen(buffer));
}
void quit(Client *client)
{
    char buffer[BUFFER_SIZE] = "quit ", id[BUFFER_SIZE], temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id);
    strcat(temp, id);
    strcat(buffer, id);
    int fd = open(temp, O_WRONLY);
    if (fd < 0)
        perror("open quit");
    write(fd, buffer, 5 + strlen(id));
    // printf("who %d\n", fd);
    close(fd);
    close(client->socketfd);
}
