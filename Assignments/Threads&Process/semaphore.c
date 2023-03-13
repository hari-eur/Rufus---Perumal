#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t semaphore;

void* thread_func(void* arg) 
{
    sem_wait(&semaphore); // decrement semaphore count
    printf("Thread %ld is accessing the shared resource\n", (long) arg);
    // Access shared resource
    printf("Thread %ld is done accessing the shared resource\n", (long) arg);
    sem_post(&semaphore); // increment semaphore count
    pthread_exit(NULL);
}

int main() 
{
    pthread_t thread1,thread2;
    sem_init(&semaphore,0,2); // initialize semaphore to 2 so tht 2 processes can access the shared resource simultaneously

    pthread_create(&thread1,NULL,thread_func,(void*) 1);
    pthread_create(&thread2,NULL,thread_func,(void*) 2);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

    sem_destroy(&semaphore);
    return 0;
}
