// 120 -  Write a program to print Fibonacci series using array
#include <stdio.h>
int main() {

    int num[30], n;

    printf("How many fibonacci numbers you need = ");
    scanf("%d", &n);

    // fibonacci series : 0 1 1 2 3 5 8 13 21 ...
    num[0] = 0;
    num[1] = 1;
    for (int i = 2; i < n; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}