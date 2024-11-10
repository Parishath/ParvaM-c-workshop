#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *p);
    return 0;
}
