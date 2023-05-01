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
#include <signal.h>
#include <dirent.h>

#define MAXLINE 1024
#define SERV_PORT 9877

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

ssize_t readline(int fd, void *buff, size_t maxlen) {
    ssize_t n, rc;
    char c, *ptr=buff;

    for(n==1;n<maxlen;n++){
        again:
        if ((rc=read(fd,&c,1))==1) {
            *ptr++ = c;
            if (c=='\n') break;
        }else if (rc==0){
            *ptr = 0;
            return (n-1); // EOF is read, n-1 bytes were read
        }else {
            if (errno == EINTR) 
                goto again;
            return(-1);
        }
    }
    *ptr = 0;
    return(n);
}

void str_cli(FILE *fp, int sockfd)
{
	char sendline[MAXLINE], recvline[MAXLINE];
	ssize_t 	n;

	while( fgets(sendline, MAXLINE, fp) != NULL) {
		writen(sockfd, sendline, strlen(sendline));
		if (readline(sockfd, recvline, MAXLINE)==0){
			perror("str_cli: server terminated");
		}
		fputs(recvline, stdout);
	}
}

int main(int argc, char **argv) {
    int i, sockfd[5];
    struct sockaddr_in servaddr;
      
    for (i=0;i<5;i++) {
        if ( (sockfd[i] = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            perror("socket error");
            exit(0);
        }

        bzero(&servaddr, sizeof(servaddr));
        servaddr.sin_family = AF_INET;
        servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
        servaddr.sin_port = htons(SERV_PORT);
        inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

        if (connect(sockfd[i], (struct sockaddr *) &servaddr, sizeof(servaddr)) < 0) {
            perror("connect error");
            exit(0);
        }
    }
    str_cli(stdin, sockfd[0]);
    exit(0);
}