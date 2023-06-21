// 80 -  1+2+3+ ... ... +n
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1 + 2 + 3 + ... + %d = %d\n", n, sum);

    return 0;
}