/*************************
102 -  Pattern program (7)
------------------------------
a
a b
a b c
a b c d
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ", col + 96);
        } printf("\n");
    }

    return 0;
}