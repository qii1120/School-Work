#include "myhdr.h"


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