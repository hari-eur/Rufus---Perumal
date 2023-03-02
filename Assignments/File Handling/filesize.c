#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: Failed to open file.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("File size: %ld bytes\n", size);

    fclose(fp);
    return 0;
}
