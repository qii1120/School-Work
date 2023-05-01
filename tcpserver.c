#include <stdio.h>   
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/socket.h>   
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <netinet/in.h>   
#include <arpa/inet.h>   
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>
# include <bits/sigaction.h>
#include <signal.h>

#define MAXLINE 1024
#define SERV_PORT 9877


void sigchld_handler(int sig) {
    int saved_errno = errno;
    while(waitpid((pid_t)(-1),0,WNOHANG)>0) {}
    // printf("SIGCHLD\n");
    // wait(NULL);
    // printf("wait_errno\n");
    errno = saved_errno;
}

void set_signal_action(void)
{
	struct sigaction act;
	bzero(&act, sizeof(act));
	act.sa_handler = &sigchld_handler;
	sigaction(SIGCHLD, &act, NULL);
}


ssize_t writen(int fd, const void *buff, size_t n) {
    ssize_t nwritten;
    size_t nleft = n;
    const char *ptr = buff;

    while (nleft > 0) {
        if ((nwritten=write(fd, buff, nleft))<=0) {
            if (nwritten <0 && errno == EINTR)
                nwritten = 0; //call write again
            else  return(-1);
        } 
        nleft -= nwritten;
        ptr += nwritten;
    }
    return (n);
}

void str_echo(int sockfd)
{
	ssize_t 	n;
	char buff[MAXLINE];

	again:
	while( (n = read(sockfd, buff, MAXLINE)) > 0) 
		writen(sockfd, buff, n);
	
	if (n<0 && errno == EINTR)
		goto again;
	else if (n<0)
		perror("read error");
	exit(0);
}

int main(int argc, char **argv) {
    int listenfd, connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in servaddr, cliaddr;

    set_signal_action();
      
    if ( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket error");
        exit(0);
    }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERV_PORT);
    
    if (bind(listenfd, (struct sockaddr *) &servaddr, sizeof(servaddr)) < 0) {
        perror("bind error");
        exit(0);
    }

    if (listen(listenfd, 5) != 0 ) {
        perror("listen error");
        exit(0);
    }

    while(1) {
        clilen = sizeof(cliaddr);
        if ( (connfd = accept(listenfd, (struct sockaddr*)&cliaddr, &clilen))<0){
            if (errno = EINTR)
                continue;
            else {
                perror("accept error");
                exit(0);
            }
        }
        if ( (childpid = fork()) ==0 ) { //child process
            close(listenfd);     // close listening socket in child process
            str_echo(connfd);    // process the request
            exit(0);
        };
        close(connfd); //close connected socket in parent process
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
