// 82 -  1*2 + 2*3 + 3*4 + ... ... + n1*n2
#include <stdio.h>
int main() {

    int n1, n2;
    printf("Enter n1 and n2 : ");
    scanf("%d %d", &n1, &n2);

    int sum = 0;
    int i = 1, j = 2;
    while (i <= n1) {
        sum += i * j;
        i++;
        j++;
    }

    printf("1*2 + 2*3 + 3*4 + ... + %d*%d = %d\n", n1, n2, sum);

    return 0;
}