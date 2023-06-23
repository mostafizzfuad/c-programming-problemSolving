/***************************
105 -  Pattern program (2)
--------------------------
* * * * *
  * * *
    *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);
    /// bottom reverse pyramid
    for (int row = numberOfRows; row >= 1; row--) {
        /// printing space
        for (int col = 1; col <= numberOfRows - row; col++) {
            printf(" ");
        } 
        /// printing star
        for (int col = 1; col <= 2 * row - 1; col++) {
            printf("*");
        } printf("\n");
    }

    return 0;
}