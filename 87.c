// 87 -  1 * 2 * 3 * ... * n
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("1 * 2 * 3 * ... * %d = %d\n", n, fact);

    return 0;
}
