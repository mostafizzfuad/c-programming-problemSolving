// 25 -  Given the length of three arms of a triangle, write a program to calculate its area ? where,  area = sqrt(s(s-a)(s-b)(s-c)) ; s = (a+b+c)/2 : (s = semi-parameter)
#include <stdio.h>
int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double s = (a + b + c) / 2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf", area);

    return 0;
}