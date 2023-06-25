// 135 -  Write a program to string concatenation using strcat() function ?
#include <stdio.h>
int main() {

    char first[30];
    char second[30];

    printf("Enter first string = ");
    gets(first);
    printf("Enter second string = ");
    gets(second);

    strcat(first, second);
    printf("%s\n", first);

    return 0;
}