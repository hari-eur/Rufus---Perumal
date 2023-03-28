#include <stdio.h>
 
// declare the external function
extern void my_function();
 
int main() 
{
    my_function();
    return 0;
}

// gcc -o main main.c -L. -lmylib
