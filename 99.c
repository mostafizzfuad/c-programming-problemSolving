/**********************************************
Pattern - Left Angle Triangle (Space+Something)
***********************************************
99 -  Pattern program (1)  :: print - space & col
-----------------------------
         1
      1  2
   1  2  3
1  2  3  4
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
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













/*********************************************
Pattern - Left Angle Triangle (Space+Something)
***********************************************
99 -  Pattern program (1)  :: print - space & col
-----------------------------
         1
      1  2
   1  2  3
1  2  3  4


99 -  Pattern program (2)  :: print - space & row
-----------------------------
         1
      2  2
   3  3  3
4  4  4  4
***************************/