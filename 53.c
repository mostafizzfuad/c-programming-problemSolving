// 53 -  Write a program to determine pass & fail ?
#include <stdio.h>
int main() {

    double marks;
    scanf("%lf", &marks);

    if (marks >= 33) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}