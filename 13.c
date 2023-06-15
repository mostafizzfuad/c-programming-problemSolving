// 13 -  C program to convert  Uppercase to Lowercase letter  ?  [ ASCII Value & Library function : tolower() ]
#include <stdio.h>
int main() {

    char upper;
    scanf("%c", &upper);
    printf("%c\n", upper + 32);
    printf("%c\n", tolower(upper));

    return 0;
}