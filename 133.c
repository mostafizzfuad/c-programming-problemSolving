// 133 -  Write a program to find the length of a String using the library function ?
#include <stdio.h>
int main() {

    char name[25];

    printf("Enter your name = ");
    gets(name);

    // int len = strlen(name);
    int i = 0, len = 0;
    while (name[i] != '\0') {
        len++;
        i++;
    }
    printf("Length of string = %d\n", len);

    return 0;
}