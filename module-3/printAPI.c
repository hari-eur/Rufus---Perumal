#include <stdio.h>
#define print(...) printf(__VA_ARGS__)

int main() 
{
    char a[]="embedUR Systems";
    char b[]="Rufus";
    char c[]="my program";

    print("Welcome to %s\n",a);
    print("Hello to %s:Welcome to %s\n",b,c);

    return 0;
}
