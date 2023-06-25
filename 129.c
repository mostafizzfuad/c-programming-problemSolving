// 129 -  Write a program to Sum of upper & lower triangles elements of a matrix ?
#include <stdio.h>
int main() {

    int A[3][3], upperSum = 0, lowerSum = 0;

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

    // calculates the sum of upperTriangle elements
    printf("\nUpper triangle elements = ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i < j) {
                printf("%d ", A[i][j]);
                upperSum += A[i][j];
            }
        }
    }
    printf("\nSum of upper triangle elements = %d\n", upperSum);
    
    // calculates the sum of lowerTriangle elements
    printf("\nLower triangle elements = ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                printf("%d ", A[i][j]);
                lowerSum += A[i][j];
            }
        }
    }
    printf("\nSum of lower triangle elements = %d\n", lowerSum);

    return 0;
}