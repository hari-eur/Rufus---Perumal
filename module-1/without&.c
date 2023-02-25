#include <stdio.h>

int main() 
{
    int num;
    int *pnum = &num;
    
    printf("Please enter an integer:");
    scanf("%d",pnum);
    printf("The integer you entered is: %d\n",num);    
    return 0;
}
