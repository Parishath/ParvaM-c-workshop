#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isdigit(ch))
        printf("%c is a digit\n", ch);
    else if (isalpha(ch))
        printf("%c is an alphabet\n", ch);
    else
        printf("%c is neither a digit nor an alphabet\n", ch);
    return 0;
}
