// 85 -  1^2 + 3^2 + 5^2 + ... ... + n^2
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i * i;
        i+=2;
    }

    printf("1^2 + 3^2 + 5^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}