#include <stdio.h>

int main() {
    int num=5;
    char c='A';
    void *ptr; 

    ptr=&num; 
    printf("Value of num:%d\n", *(int *)ptr); 

    ptr=&c; 
    printf("Value of c:%c\n", *(char *)ptr); 
    return 0;
}
