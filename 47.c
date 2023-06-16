// 47 -  Write a program to determine a number positive or negative ?
#include <stdio.h>
int main() {

    int number;
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}