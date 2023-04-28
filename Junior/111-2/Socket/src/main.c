#include "myhdr.h"

int main(int argc, char *argv[])
{
    setenv("PATH" , "bin:.:/bin" , 1);
    List *numberPipe = initList();

    while (1)
    {
        setbuf(stdout, NULL); // disable buffering of stdout
        printf("%% ");

        char *str = (char *)malloc(sizeof(char) * BUFFER_SIZE);
        char *buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
        char *path = (char *)malloc(sizeof(char) * BUFFER_SIZE);
        char *value = (char *)malloc(sizeof(char) * BUFFER_SIZE);
        char **arg;
        size_t buffer_size = BUFFER_SIZE;
        int bytes_read = getline(&str, &buffer_size, stdin);
        str[bytes_read - 1] = '\0';
        bytes_read--;

        if(bytes_read==0) continue; // if enter

        if (strcmp(str, "quit") == 0)
            exit(EXIT_SUCCESS);

        // printenv
        if ((sscanf(str, "%s %s", buf, path) == 2) && (strcmp(buf, "printenv") == 0))
        {
            printEnv(path);
            deductCount(numberPipe);
            continue;
        }
        // setenv
        if ((sscanf(str, "%s %s %s", buf, path, value) == 3) && (strcmp(buf, "setenv") == 0))
        {
            setEnv(path, value);
            deductCount(numberPipe);
            continue;
        }

        PipeList pipe_list;
        pipe_list = getPipe(str);
        if(pipe_list.count ==0) continue;

        int pipes[pipe_list.count][2];
        for (int i = 0; i < pipe_list.count; i++)
            if (pipe(pipes[i]) < 0)
                exit(EXIT_FAILURE);

        // if the command line has number pipe
        int temp;
        Node *n;
        if (sscanf(str, "%*s |%d", &temp) == 1)
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
                if (i != pipe_list.count - 1)
                {
                    if (dup2(pipes[i][1], STDOUT_FILENO) < 0)
                        perror("dup2");
                }
                else if ((i == pipe_list.count - 1) && (sscanf(str, "%*s |%d", &temp) == 1))
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

                buf = pipe_list.pipeCommands[i];
                for (int i = 0; i < pipe_list.count; i++)
                {
                    close(pipes[i][0]);
                    close(pipes[i][1]);
                }
                int st = execvp(buf, arg);
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
    }

    return 0;
}