// 149 -  Write a program that Passing String to function
#include <stdio.h>

void display(char n[30]) {
    int i = 0;
    while (n[i] != '\0') {
        printf("%c", n[i]);
        i++;
    }
}

int main() {

    char name[30];
    gets(name);

    display(name); // function invoke

    return 0;
}