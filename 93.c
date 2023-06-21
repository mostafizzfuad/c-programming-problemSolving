// 93 -  1^3 * 2^3 * 3^3 * ... ... * n^3
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i * i * i;
    }

    printf("1^3 * 2^3 * 3^3 * ... ... * %d^3 = %d\n", n, fact);

    return 0;
}