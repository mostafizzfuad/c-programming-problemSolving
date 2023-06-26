// 139 -  Write a program to swap a string ?
#include <stdio.h>
int main() {

    char first[40], second[40], temp[40];

    printf("Enter first string = ");
    gets(first);
    printf("Enter second string = ");
    gets(second);

    strcpy(temp, first);
    strcpy(first, second);
    strcpy(second, temp);

    printf("first string = %s\n", first);
    printf("second string = %s\n", second);

    return 0;
}