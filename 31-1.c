// 31 -  Write a program to swapping the two number ?  ( use :: temporary variable )
#include <stdio.h>
int main() {

    int num1, num2, temp;
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("%d %d\n", num1, num2);

    return 0;
}