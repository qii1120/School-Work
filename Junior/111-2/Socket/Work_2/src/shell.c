#include "myhdr.h"

void shell(List *numberPipe, int sockfd)
{
    char *str = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *buff = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *path = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char *value = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    char **arg;
    int n;
    again:
    writen(sockfd, "% ", 2);
	if( (n = read(sockfd, buff, BUFFER_SIZE)) > 0)
    {
        buff[n-2]='\0';
        n=n-2;
        if (n == 0)
            goto again ;// if enter

        if ((sscanf(buff, "%s", str) == 1) && (strcmp(str, "quit") == 0))
            return ;

        //printenv
        if ((sscanf(buff, "%s %s", str, path) == 2) && (strcmp(str, "printenv") == 0))
        {
            printEnv(path, sockfd);
            deductCount(numberPipe);
            goto again;
        }
        //setenv
        if ((sscanf(buff, "%s %s %s", str, path, value) == 3) && (strcmp(str, "setenv") == 0))
        {
            setEnv(path, value, sockfd);
            deductCount(numberPipe);
            goto again;
        }
        PipeList pipe_list;
        pipe_list = getPipe(buff);
        if (pipe_list.count == 0)
            goto again;

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
                dup2(sockfd, STDOUT_FILENO);
                dup2(sockfd, STDERR_FILENO);
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

                str = pipe_list.pipeCommands[i];
                for (int i = 0; i < pipe_list.count; i++)
                {
                    close(pipes[i][0]);
                    close(pipes[i][1]);
                }
                close(sockfd);
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
        deductCount(numberPipe);
        goto again;
		// writen(sockfd, buff, n);
    }
	
	if (n<0 && errno == EINTR)
		goto again;
	else if (n<0)
		perror("read error");
}