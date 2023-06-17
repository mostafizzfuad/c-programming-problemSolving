// 54 -  Mark distribution -  Grade System
#include <stdio.h>
int main() {

    double marks;
    scanf("%lf", &marks);

    if (marks > 100 || marks < 0) {
        printf("Invalid Marks\n");
    } else if (marks >= 80) {
        printf("A+\n");
    } else if (marks >= 70) {
        printf("A\n");
    } else if (marks >= 60) {
        printf("A-\n");
    } else if (marks >= 50) {
        printf("B\n");
    } else if (marks >= 40) {
        printf("C\n");
    } else if (marks >= 33) {
        printf("D\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}