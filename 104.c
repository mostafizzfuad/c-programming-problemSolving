/*************************
104 -  Pattern program (9)
------------------------------
*
* *
* * *
* * * *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        } printf("\n");
    }

    return 0;
}