#include "myhdr.h"

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