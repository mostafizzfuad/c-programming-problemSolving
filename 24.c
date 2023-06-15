// 24 -  Write a program that calculates the area of a triangle ?
#include <stdio.h>
int main() {

    double base, height;
    scanf("%lf %lf", &base, &height);

    double area = 0.5 * base * height;
    printf("%.2lf", area);

    return 0;
}