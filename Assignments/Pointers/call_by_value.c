#include <stdio.h>

void square(int x) 
{
    x=x*x;
    printf("The square of the number is %d\n",x);
}

int main() 
{
    int num = 5;
  
    printf("The original number is %d\n",num);
    square(num);
    printf("The original number is still %d\n",num);
    return 0;
}
