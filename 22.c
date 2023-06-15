// 22 -  Write a program that takes two integer and display sum & average ?
#include <stdio.h>
int main() {

    int num1, num2, sum;
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    double avg = (double)sum / 2; // type casting

    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", avg);

    return 0;
}
