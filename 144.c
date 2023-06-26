// 144 -  Write a program to square a number ?
#include <stdio.h>

int square(int a) {
    return a * a;
}

int main() {

    int number;
    printf("Enter an integers = ");
    scanf("%d", &number);

    int result = square(number);
    printf("Square result = %d\n", result);

    return 0;
}