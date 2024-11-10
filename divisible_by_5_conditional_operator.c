#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 5 == 0) ? printf("Divisible by 5\n") : printf("Not divisible by 5\n");
    return 0;
}
