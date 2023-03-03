#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() 
{
    int file_descriptor;
    char buffer[100];
    
    
    file_descriptor = open("file.txt", O_RDONLY);

    if (file_descriptor == -1)
    {
        printf("Failed to open file.");
        return 1;
    }

    while (read(file_descriptor, buffer, 100) > 0) 
    {
        printf("%s", buffer);
    }

    close(file_descriptor);

    return 0;
}
