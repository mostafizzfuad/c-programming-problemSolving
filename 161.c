// 161 -  pointer pointing to different variable
#include <stdio.h>
int main() {

    int x = 10, y = 20, z = 30;
    int *p;

    p = &x;
    printf("value of x = %d\n", *p);
    p = &y;
    printf("value of y = %d\n", *p);
    p = &z;
    printf("value of z = %d\n", *p);

    return 0;
}