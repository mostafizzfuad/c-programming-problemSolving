// 140 -  Write a program using strupr() & strlwr() function ?
#include <stdio.h>
int main() {

    char first[40], second[40];

    printf("Enter lower string = ");
    gets(first);
    strupr(first); // convert uppercase
    printf("after converting = %s\n", first);

    printf("Enter upper string = ");
    gets(second);
    strlwr(second); // convert lowercase
    printf("after converting = %s\n", second);

    return 0;
}