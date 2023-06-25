// 124 -  Write a program to input A[3][4] matrix & print elements ?
#include <stdio.h>
int main() {

    int A[3][4];

    printf("Enter the element of matrix A = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrix A = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }

    return 0;
}