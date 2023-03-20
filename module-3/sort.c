#include <stdio.h>
#include <string.h>


char* sortString(char* str) 
{
    int len=strlen(str);
    for (int i=0;i<len;i++)
    {
        for (int j=i+1;j<len;j++)
        {
            if((isdigit(str[i]) && isdigit(str[j]) && str[i] > str[j]) ||(isalpha(str[i]) && isalpha(str[j]) && str[i] > str[j]))
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    return str;
}

int main() 
{
    char str[100];
    scanf("%s",str);

    char* sortedStr=sortString(str);

    printf("%s\n", sortedStr);

    return 0;
}
