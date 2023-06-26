// 142 -  Write a program to calculate the number of capital letters, small letters & digits ?
#include <stdio.h>
int main() {

    char str[100], ch;
    int i, capital, small, digit;

    printf("Enter a string = ");
    gets(str);

    i = capital = small = digit = 0;
    while ((ch = str[i]) != '\0') {
        if (ch >= 65 && ch <= 90) {
            capital++;
        } else if (ch >= 97 && ch <= 122) {
            small++;
        } else if (ch >= 48 && ch <= 57) {
            digit++;
        }
        i++;
    }

    printf("Number of capital letter = %d\n", capital);
    printf("Number of small letter = %d\n", small);
    printf("Number of digit = %d\n", digit);

    return 0;
}