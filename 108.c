/**************************
108 -  Pattern program (2)
--------------------------
 * * * *
  * * *
   * *
    *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = numberOfRows; row >= 1; row--) {
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