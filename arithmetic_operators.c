#include <stdio.h>
int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    a++; // Increment operator
    printf("Incremented value of a: %d\n", a);
    b--; // Decrement operator
    printf("Decremented value of b: %d\n", b);
    return 0;
}
