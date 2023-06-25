// 128 -  Write a program to Sum of diagonal elements of a matrix ?
#include <stdio.h>
int main() {

    int A[3][3], sum = 0;

    // input matrix A
    printf("\nEnter the element of A matrix = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        } printf("\n");
    }
    // print A matrix
    printf("Matrix of A = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }

    // calculates sum of diagonal elements
    printf("\nDiagonal elements = ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d ", A[i][j]);
                sum += A[i][j];
            }
        }
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}