#include <stdio.h>

void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}

int main() {
    void (*func_ptr)(int, int);

    func_ptr = &add;
    func_ptr(5, 3); 

    func_ptr = &subtract; 
    func_ptr(5, 3); 

    func_ptr = &multiply;
    func_ptr(5, 3); 

    return 0;
}
