/**************************
112 -  Pattern program (3)
--------------------------
*          *
   *    *
      *
   *    *
*           *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= numberOfRows; col++) {
            if (row == col || row + col == numberOfRows + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        } printf("\n");
    }

    return 0;
}