/**********************************************
Pattern - Left Angle Triangle (Top+Bottom)
******************************************
101 -  Pattern program (1)  ::  print - space & col
------------------------------
         1
      1  2
   1  2  3
1  2  3  4
   1  2  3
      1  2
         1
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
        /// printing number
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        } 
        printf("\n");
    }
    /// bottom triangle
    for (int row = numberOfRows - 1; row >= 1; row--) {
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






/*****************************************
Pattern - Left Angle Triangle (Top+Bottom)
******************************************
101 -  Pattern program (1)  ::  print - space & col
------------------------------
         1
      1  2
   1  2  3
1  2  3  4
   1  2  3
      1  2
         1


101 -  Pattern program (2)  ::  print - space & row
------------------------------
         1
      2  2
   3  3  3
4  4  4  4
   3  3  3
      2  2
         1
***************************/