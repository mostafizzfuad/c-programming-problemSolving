// 26 -  Write a program to calculate the area of a rectangle ?
#include <stdio.h>
int main() {

    double height, width;
    scanf("%lf %lf", &height, &width);

    double area = height * width;
    printf("%.2lf", area);

    return 0;
}