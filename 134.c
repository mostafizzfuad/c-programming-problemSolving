// 134 -  Write a program to Copy a string using strcpy() function ?
#include <stdio.h>
int main() {

    char source[30];
    char target[30];

    printf("Enter source = ");
    gets(source);

    strcpy(target, source);

    printf("source = %s\n", source);
    printf("target = %s\n", target);

    return 0;
}