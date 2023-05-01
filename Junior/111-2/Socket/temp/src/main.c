#include "myhdr.h"

int main(int argc, char *argv[])
{
    setenv("PATH" , "bin:.:/bin" , 1);
    int listenfd;
    pid_t childpid;
    struct sockaddr_in servaddr;
    Client_List *list = initClientList();
    char **arg = (char **)malloc(sizeof(char *) * 256);
    arg[0]="shell";

    set_signal_action();

    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    
        perror("socket error");
        exit(0);
    }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERV_PORT);

    if (bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0)
    {
        perror("bind error");
        exit(0);
    }

    if (listen(listenfd, BACKLOG) != 0)
    {
        perror("listen error");
        exit(0);
    }

    while (1)
    {
        Client *client = initClient();
        if ((client->socketfd = accept(listenfd, (struct sockaddr *)&(client->addr), &(client->addr_len))) < 0)
        {
            if (errno = EINTR)
                continue;
            else
            {
                perror("accept error");
                exit(0);
            }
        }
        if(addClient(list, client) == NULL) continue;
        printf("client: %d\n", client->id);
        if ((childpid = fork()) == 0)
        {                    // child process
            close(listenfd); // close listening socket in child process
            dup2(client->socketfd, STDIN_FILENO);
            dup2(client->socketfd, STDOUT_FILENO);
            dup2(client->socketfd, STDERR_FILENO);
            // str_echo(connfd);    // process the request
            int st = execvp("shell", arg);
            if (st == -1)
            {
                perror("execvp");
                exit(EXIT_FAILURE);
            }
            exit(0);
        };
        Client *tmp = list->head;
        while(tmp!=NULL)
        {
            printf("client in list: %d\n", tmp->id);
            tmp=tmp->next;
        }
        close(client->socketfd); // close connected socket in parent process
        // removeClient(list, client);
        // close(pipes[0]);
        // close(pipes[1]);
    }

    return 0;
}