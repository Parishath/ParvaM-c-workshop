#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;

    // Implicit casting
    float result1 = a + b;
    printf("Implicit casting result: %.2f\n", result1);

    // Explicit casting
    int result2 = a + (int)b;
    printf("Explicit casting result: %d\n", result2);

    return 0;
}