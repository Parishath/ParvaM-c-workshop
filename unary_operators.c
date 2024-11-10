#include <stdio.h>
int main() {
    int a = 5;
    int original = a;
    int incremented = ++a;
    int decremented = --a;

    printf("Original: %d, Incremented: %d, Decremented: %d\n", original, incremented, decremented);
    return 0;
}
