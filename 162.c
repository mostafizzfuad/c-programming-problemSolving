// 162 -  Adding two numbers using pointer
#include <stdio.h>
int main() {

    int x = 10, y = 20, sum;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    sum = *p1 + *p2;
    printf("sum = %d\n", sum);

    return 0;
}