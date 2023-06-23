/**************************
109 -  Pattern program (3)
--------------------------
   *
  * *
 * * *
  * *
   *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);
    /// top triangle
    for (int row = 1; row <= numberOfRows; row++) {
        /// printing space
        for (int col = 1; col <= numberOfRows - row; col++) {
            printf(" ");
        }
        /// printing star
        for (int col = 1; col <= row; col++) {
            printf("* ");
        } printf("\n");
    }
    /// bottom triangle
    for (int row = numberOfRows - 1; row >= 1; row--) {
        /// printing space
        for (int col = 1; col <= numberOfRows - row; col++) {
            printf(" ");
        }
        /// printing star
        for (int col = 1; col <= row; col++) {
            printf("* ");
        } printf("\n");
    }

    return 0;
}