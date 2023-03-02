#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


void *write_to_file(void *arg)
 {
    FILE *fp = fopen("dummyy.txt", "a"); 
    if (fp==NULL) 
    {
        perror("Error opening file");
        exit(1);
    }
    fprintf(fp,"%s\n", (char*) arg);
    fclose(fp); 
    pthread_exit(NULL);
}

int main() 
{
    pthread_t thread1, thread2;
    char *str1="Thread 1";
    char *str2="Thread 2";

    while (1) 
    {
        
        pthread_create(&thread1, NULL,write_to_file,(void*)str1);
        pthread_join(thread1,NULL);

        
       pthread_create(&thread2,NULL, write_to_file,(void*)str2) ;  
       pthread_join(thread2,NULL) ;
    }

    return 0;
}
