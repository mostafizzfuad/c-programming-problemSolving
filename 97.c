/*************************
97 -  Pattern program (2)
------------------------------
1
2 2
3 3 3
4 4 4 4
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", row);
        } printf("\n");
    }

    return 0;
}