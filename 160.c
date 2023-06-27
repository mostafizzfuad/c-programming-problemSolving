// 160 -  pointer basic program 2
#include <stdio.h>
int main() {

    int x = 5;
    int *p; // pointer variable
    p = &x;

    printf("Value of x = %d\n", x); 
    printf("Address of x = %d\n", &x); 
    printf("Address of x = %d\n", p);
    printf("Value of x = %d\n", *p);
    printf("Address of p = %d\n", &p);

    return 0;
}