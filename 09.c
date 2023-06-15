// 9 -  C program to find the size of int, float, double & char datatype ?
#include <stdio.h>
int main() {

    int i;
    float f;
    double d;
    char ch;

    printf("Size of int = %d\n", sizeof(i));
    printf("Size of float = %d\n", sizeof(f));
    printf("Size of double = %d\n", sizeof(d));
    printf("Size of char = %d\n", sizeof(ch));

    return 0;
}