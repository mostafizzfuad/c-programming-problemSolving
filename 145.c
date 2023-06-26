// 145 -  Write a program to calculate the area of a triangle ?
#include <stdio.h>

double calculateArea(double b, double h) {
    return 0.5 * b * h;
}

int main() {

    double base, height;
    printf("Enter base and height = ");
    scanf("%lf %lf", &base, &height);

    double result = calculateArea(base, height);
    printf("Area of triangle = %lf\n", result);

    return 0;
}