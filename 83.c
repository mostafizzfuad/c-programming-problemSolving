// 83 -  1*3*4 + 2*5*6 + 3*7*8 + ... ... + n1*n2*n3
#include <stdio.h>
int main() {

    int n1, n2, n3;
    printf("Enter n1 , n2 , n3 : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int sum = 0;
    int i = 1, j = 3, k = 4;
    while (i <= n1) {
        sum += i * j * k;
        i++;
        j+=2;
        k+=2;
    }

    printf("1*3*4 + 2*5*6 + 3*7*8 + ... ... + %d*%d*%d = %d\n", n1, n2, n3, sum);

    return 0;
}