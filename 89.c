// 89 -  2 * 4 * 6 * ... * n
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 2; i <= n; i+=2) {
        fact *= i;
    }

    printf("2 * 4 * 6 * ... * %d = %d\n", n, fact);

    return 0;
}