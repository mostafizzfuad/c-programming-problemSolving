/**********************************************
Pattern - Square
****************
102 -  Pattern program (1)
--------------------------
* * * *
* * * *
* * * *
* * * *
***************************/
#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);
    
    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= numberOfRows; col++) {
            printf("* ");
        } printf("\n");
    }

    return 0;
}