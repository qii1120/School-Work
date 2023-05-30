#include "myhdr.h"

void shell_cmd(List *numberPipe, char *buff, int fd)
{
    char **arg, str[BUFFER_SIZE];
    PipeList pipe_list;
    pipe_list = getPipe(buff, fd);
    if (pipe_list.count == 0)
        return;

    int pipes[pipe_list.count][2];
    for (int i = 0; i < pipe_list.count; i++)
        if (pipe(pipes[i]) < 0)
            exit(EXIT_FAILURE);

    // if the command line has number pipe
    int temp;
    Node *n;
    if (sscanf(buff, "%*s |%d", &temp) == 1)
    {
        n = addNode(numberPipe, temp);
    }
    pid_t pid;
    for (int i = 0; i < pipe_list.count; i++)
        switch (pid = fork())
        {
        case -1:
            perror("fork");
        case 0:
            arg = getArgu(pipe_list.arg[i]);
            dup2(fd, STDOUT_FILENO);
            dup2(fd, STDERR_FILENO);
            if (i != pipe_list.count - 1)
            {
                if (dup2(pipes[i][1], STDOUT_FILENO) < 0)
                    perror("dup2");
            }
            else if ((i == pipe_list.count - 1) && (sscanf(buff, "%*s |%d", &temp) == 1))
            {
                if (dup2(n->pipe[1], STDOUT_FILENO) < 0)
                    perror("dup2");
            }

            if ((numberPipe->head) && (numberPipe->head->count == 0))
            {
                dup2(numberPipe->head->pipe[0], STDIN_FILENO);
                deletefromhead(numberPipe);
            }
            else if (i != 0)
            {
                dup2(pipes[i - 1][0], STDIN_FILENO);
            }

            strcpy(str, pipe_list.pipeCommands[i]);
            for (int i = 0; i < pipe_list.count; i++)
            {
                close(pipes[i][0]);
                close(pipes[i][1]);
            }
            close(fd);
            int st = execvp(str, arg);
            if (st == -1)
            {
                perror("execvp");
                exit(EXIT_FAILURE);
            }
        default:
            break;
        }
    for (int i = 0; i < pipe_list.count; i++)
    {
        close(pipes[i][0]);
        close(pipes[i][1]);
    }
    if ((numberPipe->head) && (numberPipe->head->count == 0))
    {
        deletefromhead(numberPipe);
    }
    while (1)
    {
        if (wait(NULL) == -1)
        {
            if (errno == ECHILD)
                break;
            else
            {
                perror("wait\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}

void shell(List *numberPipe, Client *client, redisContext *user_DB)
{
    char *str = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *buff = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *path = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *value = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *id = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char tmp[BUFFER_SIZE];
    int n;
    char temp[BUFFER_SIZE] = "server_";
    sprintf(id, "%d", client->id);
    strcat(temp, id);
// struct epoll_event event[2];
// add_event(epfd, client->socketfd);
// add_event(epfd, temp);
again:
    sprintf(tmp, "(%s)%% ", client->name);
    write(client->socketfd, tmp, strlen(tmp));
    if ((n = read(client->socketfd, buff, BUFFER_SIZE)) > 0)
    {
        buff[n - 2] = '\0';
        n = n - 2;
        if (n == 0)
            goto again; // if enter

        if ((sscanf(buff, "%s", str) == 1) && (strcmp(str, "quit") == 0))
        {
            quit(client);
            unlink(temp);
            unlink(id);
            return;
        }
        if (is_client_command(str))
        {
            // printf("%s\n", str);
            client_serve(buff, client);
            deductCount(numberPipe);
            goto again;
        }
        if (is_mail_command(str))
        {
            // printf("%s\n", str);
            mail_serve(numberPipe, buff, client, user_DB);
            deductCount(numberPipe);
            goto again;
        }
        if (is_group_command(str))
        {
            // printf("%s\n", str);
            group_serve(buff, client, user_DB);
            deductCount(numberPipe);
            goto again;
        }
        // printenv
        if ((sscanf(buff, "%s %s", str, path) == 2) && (strcmp(str, "printenv") == 0))
        {
            printEnv(path, client->socketfd);
            deductCount(numberPipe);
            goto again;
        }
        // setenv
        if ((sscanf(buff, "%s %s %s", str, path, value) == 3) && (strcmp(str, "setenv") == 0))
        {
            setEnv(path, value, client->socketfd);
            deductCount(numberPipe);
            goto again;
        }
        shell_cmd(numberPipe, buff, client->socketfd);
        deductCount(numberPipe);
        goto again;
        // writen(client->socketfd, buff, n);
    }

    if (n < 0 && errno == EINTR)
        goto again;
    else if (n < 0)
        return;
}