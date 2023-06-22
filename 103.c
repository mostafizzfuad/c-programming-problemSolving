/**********************************************
Pattern - Triangle
******************
103 -  Pattern program (1)  ::  print - row*col
------------------------------
1
2 4
3 6 9
4 8 12 16
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);
    
    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", row * col);
        } printf("\n");
    }

    return 0;
}