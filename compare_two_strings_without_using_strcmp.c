#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int i = 0, result = 0;


    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = (str1[i] - str2[i]);
            break;
        }
        i++;
    }


    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}
