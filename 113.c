/**************************
113 -  Pattern program (4) -- Floyd's Triangle
--------------------------
1
2 3
4 5 6
7 8 9 10
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, count = 0;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", ++count);
        } printf("\n");
    }

    return 0;
}