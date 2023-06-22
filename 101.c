/*************************
101 -  Pattern program (6)
-----------------------------
A
B B
C C C
D D D D
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ", row + 64);
        } printf("\n");
    }

    return 0;
}