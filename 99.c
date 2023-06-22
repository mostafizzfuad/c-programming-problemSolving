/*************************
99 -  Pattern program (4)
-----------------------------
1
0 0
1 1 1
0 0 0 0
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", row % 2);
        } printf("\n");
    }

    return 0;
}