#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    while (n > 0) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        n--;
    }
    return 0;
}
