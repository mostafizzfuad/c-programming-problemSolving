// 20 -  Write a program that takes two integer and display sum, subtraction, multiplication, division and reminder ?
#include <stdio.h>
int main() {

    int num1, num2, result;

    printf("Enter two integers = ");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("Sum = %d\n", result);

    result = num1 - num2;
    printf("Sub = %d\n", result);

    result = num1 * num2;
    printf("Mul = %d\n", result);

    result = num1 / num2;
    printf("Div = %d\n", result);

    result = num1 % num2;
    printf("Rem = %d\n", result);

    return 0;
}