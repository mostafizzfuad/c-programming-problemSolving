// 91 -  1^2 * 3^2 * 5^2 * ... ... * n^2
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i+=2) {
        fact *= i * i;
    }

    printf("1^2 * 3^2 * 5^2 * ... ... * %d^2 = %d\n", n, fact);

    return 0;
}