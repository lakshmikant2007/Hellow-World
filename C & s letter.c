#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is an Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a Lowercase letter");
    }
    else {
        printf("It is not an alphabet");
    }

    return 0;
}

