// 29 -  C program to convert Centigrade to Fahrenheit ?
#include <stdio.h>
int main() {

    double c, f;
    scanf("%lf", &c);

    f = (c * 1.8) + 32;
    printf("%.2lf", f);

    return 0;
}