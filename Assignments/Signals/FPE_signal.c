#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void fpe_handler(int signum);

int main()
{
    signal(SIGFPE,fpe_handler);
    int a=5;
    int b=0;
    int c=a/b; 
    printf("c=%d\n",c); // not  executed
    return 0;
}

void fpe_handler(int signum) 
{
    printf("Caught SIGFPE signal (%d)\n",signum);
    exit(1);
}
