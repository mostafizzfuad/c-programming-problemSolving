// 78 -  Write a program to count the number of digits in an integer ?
#include <stdio.h>
int main() {

    int num, count = 0;
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        ++count;
    }

    printf("number of digit = %d\n", count);

    return 0;
}