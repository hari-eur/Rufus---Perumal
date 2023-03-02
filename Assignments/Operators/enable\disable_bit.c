#include <stdio.h>

int main() {
    int num = 17; // binary 0001 0001
    int pos = 3; // position of the bit to be modified

    // enable the bit
    num |= (1 << pos);
    printf("After enabling bit %d: %d\n", pos, num); // binary 0001 1001

    // disable the bit
    num &= ~(1 << pos);
    printf("After disabling bit %d: %d\n", pos, num); // binary 0001 0001

    return 0;
}
