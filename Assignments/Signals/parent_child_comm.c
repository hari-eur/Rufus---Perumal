#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>
void sig_handler_parent(int signum)
{
  printf("Parent : Received a response signal from child \n");
}

void sig_handler_child(int signum)
{
  printf("Child : Received a signal from parent \n");
  sleep(1);
  kill(getppid(),SIGUSR1);
}

int main()
{
  pid_t pid;
  if((pid=fork())<0)
  {
    printf("Fork Failed\n");
    exit(1);
  }
  
  else if(pid==0)
  {
    signal(SIGUSR1,sig_handler_child); 
    printf("Child: waiting for signal\n");
    pause();
  }
 
  else
  {
    signal(SIGUSR1,sig_handler_parent); 
    sleep(1);
    printf("Parent: sending signal to Child\n");
    kill(pid,SIGUSR1);
    printf("Parent: waiting for response\n");
    pause();
  }
  return 0;
}


