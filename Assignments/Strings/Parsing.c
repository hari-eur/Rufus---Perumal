#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char input_string[100]={0}; 
    char *token=NULL; 

    printf("Enter a comma-separated string: ");
    scanf("%s", input_string); 

    token = strtok(input_string, ",");
    while (token != NULL) 
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    
    }

    return 0;
}
