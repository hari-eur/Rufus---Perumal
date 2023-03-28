#include <stdio.h>
#include <stdlib.h>

int main() {
   
    FILE *names=fopen("names.txt","r");
    FILE *greet=fopen("greet.txt","w");


if (names==NULL && greet==NULL) 
    {
        printf("Unable to open files\n");
        return 1;
    }

    char name[20];
  
    while(fscanf(names,"%s\n",name)>0) 
    {
        fprintf(greet,"Hello,%s!\n",name);
    }

   
  
    return 0;
}
