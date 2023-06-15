// 27 -  Write a program to calculate the area of circle ?  ( A = πr^2)
#include <stdio.h>
int main() {

    double r;
    scanf("%lf", &r);

    double area = 3.1416 * r * r;
    printf("%lf", area);

    return 0;
}