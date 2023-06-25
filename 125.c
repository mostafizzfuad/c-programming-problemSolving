// 125 -  Write a program to add & subtraction between two matrices ?
#include <stdio.h>
int main() {

    int A[10][10], B[10][10], C[10][10], D[10][10], rows, cols;

    printf("Enter the value of rows and cols = ");
    scanf("%d %d", &rows, &cols);

    // input matrix A
    printf("Enter the element of matrix A = ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // input matrix B
    printf("Enter the element of matrix B = ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // print matrix A
    printf("\n\nMatrix A = \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }
    // print matrix B
    printf("\nMatrix B = \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", B[i][j]);
        } printf("\n");
    }

    // calculates add & sub
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    // print A+B
    printf("\n\nMatrix A + B = \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        } printf("\n");
    }
    // print A-B
    printf("\nMatrix A - B = \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", D[i][j]);
        } printf("\n");
    }

    return 0;
}