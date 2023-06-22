/*************************
97 -  Pattern program (1)  :: print - col
-----------------------------
1 2 3 4
1 2 3
1 2
1
***************************/
#include <stdio.h>
int main() {

    int numberOfRows, row, col;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);

    for (int row = numberOfRows; 1 <= row; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        } printf("\n");
    }

    return 0;
}

/*************************************
Pattern - Reverse Right Angle Triangle
**************************************
97 -  Pattern program (1)  :: print - col
-----------------------------
1 2 3 4
1 2 3
1 2
1


97 -  Pattern program (2)  :: print - row
------------------------------
4 4 4 4
3 3 3
2 2
1


97 -  Pattern program (3)  :: print - col%2
------------------------------
1 0 1 0
1 0 1
1 0
1


97 -  Pattern program (4)  :: print - row%2
------------------------------
0 0 0 0
1 1 1
0 0
1


97 -  Pattern program (5)  :: print - col+64
------------------------------
A B C D
A B C
A B
A


97 -  Pattern program (6)  :: print - row+64
------------------------------
D D D D
C C C
B B
A


97 -  Pattern program (7)  :: print - col+96
------------------------------
a b c d
a b c
a b
a

97 -  Pattern program (8)  :: print - row+96
------------------------------
d d d d
c c c
b b
a


97 -  Pattern program (9)  :: print - *
------------------------------
* * * *
* * *
* *
*

***************************/