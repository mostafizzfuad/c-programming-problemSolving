// 23 -  Write a program that takes three integer and display sum & average ?
#include <stdio.h>
int main() {

    int num1, num2, num3, sum;
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    double avg = (double)sum / 3; // type casting

    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", avg);

    return 0;
}