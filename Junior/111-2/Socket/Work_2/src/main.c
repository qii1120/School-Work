#include "myhdr.h"

int main(int argc, char *argv[])
{
    setenv("PATH", "bin:.:/bin", 1);
    List *numberPipe = initList();

    while (1)
    {
        int listenfd, connfd;
        pid_t childpid;
        socklen_t clilen;
        struct sockaddr_in servaddr, cliaddr;

        set_signal_action();

        if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
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
            clilen = sizeof(cliaddr);
            if ((connfd = accept(listenfd, (struct sockaddr *)&cliaddr, &clilen)) < 0)
            {
                if (errno = EINTR)
                    continue;
                else
                {
                    perror("accept error");
                    exit(0);
                }
            }
            if ((childpid = fork()) == 0)
            {                     // child process
                close(listenfd);  // close listening socket in child process
                // dup2(connfd, STDIN_FILENO);
                // dup2(connfd, STDOUT_FILENO);
                // dup2(connfd, STDERR_FILENO);
                shell(numberPipe, connfd);
                printf("hello\n");
                // str_echo(connfd); // process the request
                exit(0);
            };
            close(connfd); // close connected socket in parent process
            /*
            connfd = accept(listenfd, (struct sockaddr*)&cliaddr, &clilen);
            if ( (childpid = fork()) ==0 ) { //child process
                close(listenfd);     // close listening socket in child process
                str_echo(connfd);    // process the request
                exit(0);
            };
            close(connfd); //close connected socket in parent process
            */
        }
    }

    return 0;
}