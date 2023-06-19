// 59 -  Write a program to use bitwise AND, OR, X-OR
#include <stdio.h>
int main() {

    int num1, num2, num3, result;
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 & num2 & num3; // multiplication their binary
    printf("Result of Bitwise AND = %d\n", result);

    result = num1 | num2 | num3; // sum binary
    printf("Result of Bitwise OR = %d\n", result);

    result = num1 ^ num2 ^ num3; // if binary Output same = result 0
    printf("Result of Bitwise X-OR = %d\n", result);

    return 0;
}