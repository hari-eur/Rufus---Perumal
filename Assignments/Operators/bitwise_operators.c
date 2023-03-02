#include <stdio.h>

int main() {
    unsigned int a = 60; // 0011 1100 in binary
    unsigned int b = 13; // 0000 1101 in binary
    unsigned int result;

    // Bitwise AND
    result = a & b; // 0000 1100 in binary
    printf("a & b = %u\n", result);

    // Bitwise OR
    result = a | b; // 0011 1101 in binary
    printf("a | b = %u\n", result);

    // Bitwise XOR
    result = a ^ b; // 0011 0001 in binary
    printf("a ^ b = %u\n", result);

    // Bitwise complement (NOT)
    result = ~a; // 1100 0011 in binary
    printf("~a = %u\n", result);

    // Left shift
    result = a << 2; // 1111 0000 in binary
    printf("a << 2 = %u\n", result);

    // Right shift
    result = a >> 2; // 0000 1111 in binary
    printf("a >> 2 = %u\n", result);

    return 0;
}
