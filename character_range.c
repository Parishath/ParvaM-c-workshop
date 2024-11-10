#include <stdio.h>
int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) printf("%c:%d ", ch, ch);
    printf("\n");
    for (char ch = 'a'; ch <= 'z'; ch++) printf("%c:%d ", ch, ch);
    return 0;
}