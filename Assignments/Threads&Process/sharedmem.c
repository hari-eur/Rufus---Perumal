#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

int main() 
{
    const int SHM_SIZE = sizeof(int);

    // Create shared memory region
    int* shared_var=mmap(NULL,SHM_SIZE,PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANONYMOUS,-1,0);
    if (shared_var==MAP_FAILED) 
    {
        perror("mmap");
        exit(1);
    }

    // Initialize shared variable
    *shared_var=0;

    // Fork a child process
    pid_t pid=fork();
    if (pid<0) 
    {
        perror("fork");
        exit(1);
    } 
    else if(pid==0) 
    {
        // Child process
        printf("Child process started.\n");
        for (int i=0;i<5;i++)
        {
            // Increment shared variable
            (*shared_var)++;
            printf("Child process: shared_var = %d\n", *shared_var);
            sleep(1);
        }
        printf("Child process finished.\n");
    } else 
    {
        // Parent process
        printf("Parent process started.\n");
        for (int i=0;i<5;i++)
        {
            // Increment shared variable
            (*shared_var)++;
            printf("Parent process: shared_var = %d\n", *shared_var);
            sleep(1);
        }
        printf("Parent process finished.\n");
    }

    // Cleanup shared memory region
    if (munmap(shared_var, SHM_SIZE)==-1)
    {
        perror("munmap");
        exit(1);
    }

    return 0;
}
