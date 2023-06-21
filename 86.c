// 86 -  1 + 1/2 + 1/3 + ... ... + 1/n
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    double sum = 0;
    double i = 1;
    while (i <= n) {
        sum += 1 / i;
        i++;
    }

    printf("1 + 1/2 + 1/3 + ... ... + 1/%d = %lf\n", n, sum);

    return 0;
}
