// 32 -  Write a program to find the roots of the quadratic equation ?   ( ax^2 +bx +c = 0 )  where, d = sqrt(b*b-4*a*c)  ;   x1 = (-b+d)/(2*a)   ;   x2 = (-b-d)/(2*a)
#include <stdio.h>
int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double d = sqrt(b * b - 4 * a * c);
    double x1 = (-b + d) / (2 * a);
    double x2 = (-b - d) / (2 * a);
    printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);

    return 0;
}