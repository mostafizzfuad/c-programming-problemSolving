// 135 -  Write a program to string concatenation without strcat() function ?
#include <stdio.h>
int main() {

    char first[30] = "My name is ";
    char second[30] = "Mostafizur";

    int len = strlen(first);

    int i = 0;
    while (second[i] != '\0') {
        first[len + i] = second[i];
        i++;
    }
    printf("%s", first);   

    return 0;
}