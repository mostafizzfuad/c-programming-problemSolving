#include <stdio.h>
int main() {

    int numberOfRows;

    printf("Enter number of rows : ");
    scanf("%d", &numberOfRows);
    /// top
    for (int row = 1; row <= numberOfRows; row++) {
        /// printing space
        for (int col = 1; col <= numberOfRows - row; col++) {
            printf(" ");
        }
        /// left digit
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        } 
        /// right digit
        for (int col = row - 1; col >= 1; col--) {
            printf("%d", col);
        } printf("\n");
    }
    /// bottom
    for (int row = numberOfRows - 1; row >= 1; row--) {
        /// printing space
        for (int col = 1; col <= numberOfRows - row; col++) {
            printf(" ");
        }
        /// left digit
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        } 
        /// right digit
        for (int col = row - 1; col >= 1; col--) {
            printf("%d", col);
        } printf("\n");
    }

    return 0;
}