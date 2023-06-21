// 95 -  Fibonacci series :  0 1 1 2 3 5 8 13 ... ...
#include <stdio.h>
int main() {

    int seriesRange, count = 0, first = 0, second = 1, fibo;
    printf("Enter the range of the fibonacci series: ");
    scanf("%d", &seriesRange);

    while (count < seriesRange) {
        if (count <= 1) {
            fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        count++;
    }

    return 0;
}