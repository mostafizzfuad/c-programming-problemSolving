// 28 -  Write a program to calculate the circumference of circle ? ( C = 2πr )
#include <stdio.h>
int main() {

    double r;
    scanf("%lf", &r);

    double circumference = 2 * 3.1416 * r;
    printf("%lf", circumference);

    return 0;
}