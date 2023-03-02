#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char c;

    fp1=fopen("file1.txt","r"); 
    if (fp1 == NULL) 
    {
        printf("Error: Failed to open file1.txt\n");
        return 1;
    }

    fp2=fopen("file2.txt","w");
    if(fp2==NULL) 
    {
        printf("Error: Failed to create file2.txt\n");
        return 1;
    }

    
    while((c=fgetc(fp1))!=EOF) 
    {
        fputc(c,fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
