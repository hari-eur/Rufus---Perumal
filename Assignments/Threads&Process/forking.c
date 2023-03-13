#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void task1() 
{
    printf("Task 1 started, pid = %d\n",getpid());
    sleep(3);
    printf("Task 1 completed, pid = %d\n",getpid());
}

void task2() 
{
    printf("Task 2 started, pid = %d\n",getpid());
    sleep(5);
    printf("Task 2 completed, pid = %d\n",getpid());
}

void task3() 
{
    printf("Task 3 started, pid = %d\n",getpid());
    sleep(2);
    printf("Task 3 completed, pid = %d\n",getpid());
}

int main() {
    pid_t pid1,pid2,pid3;

    pid1=fork();
    if(pid1==0) 
    {
        task1();
        exit(0);
    }
  
   if(pid2==0) 
    {
        task2();
        exit(0);
    }
  
   if(pid3==0) 
    {
        task3();
        exit(0);
    }

    
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
    waitpid(pid3, NULL, 0);

    printf("All tasks completed\n");

    return 0;
}
