#include <stdio.h>
int main() {
    int num = 6;
    if (num > 0 && num % 2 == 0)
        printf("Number is positive and even\n");
    else
        printf("Number is not positive and even\n");
    return 0;
}