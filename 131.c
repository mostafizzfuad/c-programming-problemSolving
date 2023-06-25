// 131 -  Write a program to input your name & print this name using string ?
#include <stdio.h>
int main() {

    char name[25];
    
    printf("Enter your name = ");
    gets(name);

    printf("%s\n", name);

    return 0;
}