#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char str[MAX][MAX],temp[MAX];
    int i,j,n;

    printf("Enter the number of strings:");
    scanf("%d", &n);

    printf("Enter %d strings:\n",n);
    for (i=0;i<n;i++)
        scanf("%s", str[i]);

    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (i=0;i<n;i++)
        printf("%s\n",str[i]);

    return 0;
}
