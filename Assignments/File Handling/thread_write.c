#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *write_to_file(void *arg)
{
    FILE *fp = (FILE*) arg;
    char *str = (char*) arg;

    while(1)
    {
        fprintf(fp, "%s\n", str);
        fflush(fp);
    }

    pthread_exit(NULL);
}

int main()
{
    FILE *fp = fopen("dummyy.txt", "a");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }

    pthread_t thread1, thread2;
    char *str1 = "Thread 1";
    char *str2 = "Thread 2";

    pthread_create(&thread1, NULL, write_to_file, (void*)fp);
    pthread_create(&thread2, NULL, write_to_file, (void*)fp);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    fclose(fp);

    return 0;
}

