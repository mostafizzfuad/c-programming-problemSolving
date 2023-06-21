// 75 -  Reverse a Number
#include <stdio.h>
int main() {

    int num, temp, rem;
    scanf("%d", &num);

    temp = num;

    int sum = 0;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp /= 10;
    }

    printf("%d\n", sum);

    return 0;
}