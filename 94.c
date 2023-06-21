// 94 -  Lucas series :  1 - 2 + 3 - 4 + 5 - 6 + ... ...
#include <stdio.h>
int main() {

    int n, even = 0, odd = 0;
    printf("Enter the last number of the series : ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            even += i;
        } else {
            odd += i;
        }
        i++;
    }

    printf("The result of lucas series : %d\n", odd - even);

    return 0;
}