#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else
        printf("Other character\n");

    return 0;
}