// 50 -  Write a program to determine the smallest number between the three numbers ?
#include <stdio.h>
int main() {

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        printf("Smallest number = %d\n", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("Smallest number = %d\n", num2);
    } else if (num3 < num1 && num3 < num2) {
        printf("Smallest number = %d\n", num3);
    } else {
        printf("Numbers are equal\n");
    }

    return 0;
}