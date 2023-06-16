// 40 - Unary operator
#include <stdio.h>
int main() {

    int x, y;
    scanf("%d", &x);

    // y = ++x; // pre increment   
    // y = x++; // post increment 
    // y = --x; // pre decrement
    y = x--; // post decrement
    printf("x = %d, y = %d\n", x, y); 

    return 0;
}