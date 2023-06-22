/*************************
100 -  Pattern program (5)
----------------------------
A
A B
A B C
A B C D
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ", col + 64);
        } printf("\n");
    }

    return 0;
}
