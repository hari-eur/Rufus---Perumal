#include <stdio.h>

int main() {
    int num, reverse = 0, rem, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        rem= num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    if (original == reverse) {
        printf("%d is a palindrome ", original);
    } else {
        printf("%d is not a palindrome ", original);
    }
    return 0;
}
