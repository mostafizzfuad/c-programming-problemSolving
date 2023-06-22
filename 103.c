/*************************
103 -  Pattern program (8)
-----------------------------
a
b b
c c c
d d d d
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ", row + 96);
        } printf("\n");
    }

    return 0;
}