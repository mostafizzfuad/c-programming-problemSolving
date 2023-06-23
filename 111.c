/**************************
111 -  Pattern program (2)
--------------------------
*
* *
*   *
*     *
* * * * *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= numberOfRows; col++) {
            if (col == 1 || row == numberOfRows || col == row) {
                printf("*");
            } else {
                printf(" ");
            }
        } printf("\n");
    }

    return 0;
}