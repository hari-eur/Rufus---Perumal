
#include <stdio.h>

void square(int *ptr) 
{
    *ptr = (*ptr) * (*ptr);
}

int main() 
{
    int num = 5;
    printf("num before square function: %d\n", num);
    square(&num);
    printf("num after square function: %d\n", num);
    return 0;
}
