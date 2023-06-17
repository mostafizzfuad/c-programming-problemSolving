// 52 -  Write a program to determine if a letter is uppercase or lowercase ?
#include <stdio.h>
int main() {

    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else {
        printf("Invalid character\n");
    }

    return 0;
}