/*************************
96 -  Pattern program (1)  :: print - col
-----------------------------
1
1 2
1 2 3
1 2 3 4
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = 1; row <= numberOfRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        } printf("\n");
    }

    return 0;
}



/*****************************
Pattern - Right Angle Triangle
******************************
96 -  Pattern program (1)  :: print - col
-----------------------------
1
1 2
1 2 3
1 2 3 4


96 -  Pattern program (2)  :: print - row
------------------------------
1
2 2
3 3 3
4 4 4 4


96 -  Pattern program (3)  :: print - col%2
------------------------------
1
1 0
1 0 1
1 0 1 0


96 -  Pattern program (4)  :: print - row%2
-----------------------------
1
0 0
1 1 1
0 0 0 0


96 -  Pattern program (5)  :: print - col+64
------------------------------
A
A B
A B C
A B C D


96 -  Pattern program (6)  :: print - row+64
-----------------------------
A
B B
C C C
D D D D


96 -  Pattern program (7)  :: print - col+96
------------------------------
a
a b
a b c
a b c d


96 -  Pattern program (8)  :: print - row+96
------------------------------
a
b b
c c c
d d d d


96 -  Pattern program (9)  :: print - *
-------------------------------
*
* *
* * *
* * * *

***************************/