// 146 -  Write a program to calculate pow() ?
#include <stdio.h>

double calculatePower(double b, double e) {
    double res = 1;
    for (int i = 0; i < e; i++) {
        res *= b;
    }
    return res;
}

int main() {

    double base, exp, res = 1;

    printf("Enter base : ");
    scanf("%lf", &base);

    printf("Enter exp : ");
    scanf("%lf", &exp);

    double result = calculatePower(base, exp);

    printf("Result = %lf\n", result);

    return 0;
}