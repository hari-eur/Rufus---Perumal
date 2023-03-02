#include <stdio.h>

int main() 
{
    FILE *fp1, *fp2;
    char filename[100],c;
    int count = 0, middle,i;
    
    printf("ENter filename:");
    scanf("%s",filename);

    fp1=fopen(filename,"r");
    if(fp1==NULL) 
    {
        printf("Cannot open file %s \n",filename);
        return 0;
    }
//count no of liness
    while ((c=fgetc(fp1))!=EOF) 
    {
        if(c=='\n') 
        {
           count++;
        }
    }

    middle=(count)/2;

    rewind(fp1);

    fp2=fopen("temp.txt","w");
    if (fp2==NULL) 
    {
        printf("Cannot create file temp.txt \n");
        return 0;
    }

    count=0;
    while((c=fgetc(fp1))!=EOF) 
    {
        if(c=='\n') 
        {
            count++;
        }
        fputc(c,fp2);
        if (count==middle) 
        {
            fputs("THis is new line\n",fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove(filename);
    rename("temp.txt",filename);

    printf("New line added in the middle of %s file.\n",filename);
    return 0;
}
