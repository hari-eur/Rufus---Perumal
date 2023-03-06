#include <stdio.h>
#include <string.h>
struct student
{
int rollno;
char name[60];
}s1;  
void main( )
{
s1.rollno=41;
strcpy(s1.name, “rufus”);
printf( "Rollno : %d\n",s1.rollno);
printf( "Name : %s\n",s1.name);
}
