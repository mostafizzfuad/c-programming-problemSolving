// 137 -  Write a program to string reverse using strrev() function ?
#include <stdio.h>
int main() {

    char first[40];

    printf("Enter first string = ");
    gets(first);
    printf("first = %s\n", first);

    strrev(first);
    printf("first = %s\n", first);

    return 0;
}