// 126 -  Write a program to multiplication between two matrices ?
#include <stdio.h>
int main() {

    int A[10][10], B[10][10], C[10][10], r1, c1, r2, c2, sum = 0;

    printf("Enter the number of rows and cols for A matrix = ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and cols for B matrix = ");
    scanf("%d %d", &r2, &c2);

    // condition of multiplication between two matrix
    while (c1 != r2) {
        printf("Error !! Column of first matrix is not equal to row of second matrix \n");

        printf("Enter the number of rows and cols for A matrix = ");
        scanf("%d %d", &r1, &c1);
        printf("Enter the number of rows and cols for B matrix = ");
        scanf("%d %d", &r2, &c2);
    }

    // input matrix A
    printf("\nEnter the element of A matrix = \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        } printf("\n");
    }
    // input matrix B
    printf("\nEnter the element of B matrix = \n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        } printf("\n");
    }

    // multiply C = A * B
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    // print A matrix
    printf("Matrix of A = \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }
    // print B matrix
    printf("\nMatrix of B = \n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
        } printf("\n");
    }
    // print A * B matrix
    printf("\nMatrix of A * B = \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        } printf("\n");
    }

    return 0;
}