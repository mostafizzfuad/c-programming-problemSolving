// 143 -  Write a program to sum and subtraction between two numbers ?
#include <stdio.h>

// sum function
int sum(int num1, int num2) { // parameter
    return num1 + num2;
}
// sub function
int sub(int num1, int num2) { // parameter
    return num1 - num2;
}

int main() {

    int num1, num2;
    printf("Enter two integers = ");
    scanf("%d %d", &num1, &num2);

    int sumResult = sum(num1, num2); // passing arguments & function invoke / function call
    int subResult = sub(num1, num2); // passing arguments & function invoke / function call

    printf("SUM = %d\n", sumResult);
    printf("SUB = %d\n", subResult);

    return 0;
}