// 31 -  Write a program to swapping the two number ?  ( don't use ::  temporary variable )
#include <stdio.h>
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("%d %d\n", num1, num2);

    return 0;
}