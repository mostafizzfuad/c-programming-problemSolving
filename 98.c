/*****************************************
Pattern - Right Angle Triangle (Top+Bottom)
******************************************
98 -  Pattern program (1)  :: print - col
------------------------------
1
1 2
1 2 3
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

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        } printf("\n");
    }

    for (int row = numberOfRows - 1; 1 <= row; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        } printf("\n");
    }

    return 0;
}






/*****************************************
Pattern - Right Angle Triangle (Top+Bottom)
******************************************
98 -  Pattern program (1)  :: print - col
------------------------------
1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1


98 -  Pattern program (2)  :: print - row
------------------------------
1
2 2
3 3 3
4 4 4 4
3 3 3
2 2
1


98 -  Pattern program (9)  :: print - *
------------------------------
*
* *
* * *
* * * *
* * *
* *
*
***************************/