// 164 -  swapping two numbers using pointer and function
#include <stdio.h>
void swapping(int *p1, int *p2) {
    int temp;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("x = %d\n", *p1);
    printf("y = %d\n", *p2);
}

int main() {

    int x = 10, y = 20;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    swapping(p1, p2);

    return 0;
}