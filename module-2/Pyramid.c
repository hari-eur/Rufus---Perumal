#include <stdio.h>

int main()
{
    int rows=7,i,j;
   
    // Full pyramid
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n-----------------------------\n");
    // Inverted pyramid
    i=rows;
    while(i>=1)
    {
        j=1;
        while(j<=rows-i)
        {
            printf("  ");
            j++;
        }
        j=1;
        while(j<=2*i-1)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }
    printf("\n-----------------------------\n");
    // Half pyramid
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
   
    return 0;
}
