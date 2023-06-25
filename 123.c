// 123 -  Write a program to print A[3][4] matrix elements ?
#include <stdio.h>
int main() {

    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 5, 3, 2}};

    printf("Matrix A = \n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }

    return 0;
}