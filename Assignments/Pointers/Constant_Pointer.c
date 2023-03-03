#include <stdio.h>

int main() {
    const int num = 5; // constant value
    const int *ptr = &num; // constant pointer pointing to constant value

    printf("Value of num: %d\n", num);
    printf("Value of *ptr: %d\n", *ptr);

    // *ptr = 6; // error: cannot modify a constant value through a constant pointer

    return 0;
}
