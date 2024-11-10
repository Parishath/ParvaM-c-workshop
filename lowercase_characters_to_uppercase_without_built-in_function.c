#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        ch = ch - ('a' - 'A');

    printf("Uppercase: %c\n", ch);
    return 0;
}