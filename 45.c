// 45 -  Write a program to determine a number even or odd ?
#include <stdio.h>
int main() {

    int number;
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}