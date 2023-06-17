// 48 -  Write a program to check a letter vowel or consonant ?
#include <stdio.h>
int main() {

    char ch;
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant");
    }

    return 0;
}
