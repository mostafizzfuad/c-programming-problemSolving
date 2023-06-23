/**************************
115 -  Pattern program (6)
--------------------------
1 2 3 2 1
  1 2 1
    1
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
        /// left digit
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        } 
        /// right digit
        for (int col = row - 1; col >= 1; col--) {
            printf("%d", col);
        } printf("\n");
    }

    return 0;
}