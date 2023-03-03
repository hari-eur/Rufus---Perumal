#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int * const ptr = &num1; // pointer constant pointing to non-constant value

    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);
    printf("Value of *ptr: %d\n", *ptr);

    *ptr = 15; // valid: modifying the value pointed to by the pointer constant
    // ptr = &num2; // error: cannot change the value of a pointer constant

    printf("New value of num1: %d\n", num1);
    printf("Value of *ptr after modification: %d\n", *ptr);

    return 0;
}
