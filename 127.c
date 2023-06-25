// 127 -  Write a program to convert a matrix into a transpose matrix ?
#include <stdio.h>
int main() {

    int A[10][10], transpose[10][10], rows, cols;

    printf("Enter the number of rows and cols of A matrix = ");
    scanf("%d %d", &rows, &cols);

    // input matrix A
    printf("\nEnter the element of A matrix = \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        } printf("\n");
    }
    // converting transpose matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = A[i][j];
        } 
    }

    // print A matrix
    printf("Matrix of A = \n"); 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        } printf("\n");
    }
    // print transpose matrix
    printf("Transpose Matrix of A(T) = \n"); 
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        } printf("\n");
    }
    
    return 0;
}