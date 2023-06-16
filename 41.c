// 41 - Unary operator (deeply)
#include <stdio.h>
int main() {

    int x; // x = 10

    printf("Enter any Integer : ");
    scanf("%d", &x);

    printf("%d \n", x++); // 10
    printf("%d \n", x);   // 11
    printf("%d \n", ++x); // 12
    printf("%d \n", x);   // 12
    printf("%d \n", x--); // 12
    printf("%d \n", --x); // 10

    return 0;
}