// 58 -  Write a program to determine the largest number between the two numbers ?
#include <stdio.h>
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int large = num1 > num2 ? num1 : num2;
    printf("Large number = %d\n", large);   

    return 0;
}