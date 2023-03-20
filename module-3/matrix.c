#include <stdio.h>

int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);
    int matrix[n][n];

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) 
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==m)
            {
                matrix[i][j]=matrix[i-1][j];
            }
        }
    }

    // Print the modified matrix
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
