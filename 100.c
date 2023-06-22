/**********************************************
Pattern - Reverse Left Angle Triangle (Space+Something)
*******************************************************
100 -  Pattern program (1)  :: print - space & col
------------------------------
1 2 3 4
  1 2 3
    1 2
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
        /// printing number
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        } 
        printf("\n");
    }

    return 0;
}

/*****************************************************
Pattern - Reverse Left Angle Triangle (Space+Something)
*******************************************************
100 -  Pattern program (1)  :: print - space & col
------------------------------
1 2 3 4
  1 2 3
    1 2
      1


100 -  Pattern program (2)  :: print - space & row
------------------------------
4 4 4 4
  3 3 3
    2 2
      1
***************************/