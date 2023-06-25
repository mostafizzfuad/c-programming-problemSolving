// 132 -  Write a program to display string character wise ?
#include <stdio.h>
int main() {

    char name[25];

    printf("Enter your name = ");
    gets(name);

    int i = 0;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }

    return 0;
}