// 136 -  Write a program to string compare using strcmp() function ?
#include <stdio.h>
int main() {

    char first[40];
    char second[40];

    printf("Enter first string = ");
    gets(first);
    printf("Enter second string = ");
    gets(second);

    int res = strcmp(first, second);

    if (res == 0) printf("Same string\n");
    else printf("Different string\n");

    return 0;
}