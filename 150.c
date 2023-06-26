// 150 -  Write a program to calculate factorial using recursion ?
#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main() {

    int number;
    printf("Enter an integer = ");
    scanf("%d", &number);

    int factResult = factorial(number);
    printf("Fact result = %d\n", factResult);

    return 0;
}