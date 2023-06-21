// 81 -  1+3+5+ ... ... +n
#include <stdio.h>
int main() {

    int n;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i+=2) {
        sum += i;
    }

    printf("1 + 3 + 5 + ... + %d = %d\n", n, sum);

    return 0;
}