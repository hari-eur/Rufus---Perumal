#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100
#define MAX_NUM_STRS 10

int main()
{
    char str[MAX_NUM_STRS][MAX_STR_LEN];
    int num_strs;
    int i;

    printf("Enter the number of strings: ");
    scanf("%d", &num_strs);

    printf("Enter %d strings:\n", num_strs);
    for (i = 0;i<num_strs;i++) 
    {
        scanf("%s",str[i]);
    }

    printf("The strings you entered are:\n");
    for (i=0;i<num_strs;i++) 
    {
        printf("%s\n",str[i]);
    }

    return 0;
}
