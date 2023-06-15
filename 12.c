// 12 -  C program to convert  Lowercase to Uppercase letter  ?  [ ASCII Value & Library function : toupper() ]
#include <stdio.h>
int main() {

    char lower;
    scanf("%c", &lower);
    printf("%c\n", lower - 32);
    // printf("%c\n", toupper(lower));
    
    return 0;
}