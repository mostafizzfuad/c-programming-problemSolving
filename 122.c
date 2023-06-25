// 122 -  Write a program to Copy all elements of an array to another array
#include <stdio.h>
int main() {

    int firstArray[50], secondArray[50], n;

    printf("How many numbers you need = ");
    scanf("%d", &n);

    printf("Enter %d numbers = ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &firstArray[i]);
    }
    /// printing firstArray elements
    printf("First array elements = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", firstArray[i]);
    }

    /// copying elements from firstArray to secondArray
    for (int i = 0; i < n; i++) {
        secondArray[i] = firstArray[i];
    }
    /// printing secondArray elements
    printf("\nSecond array elements = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", secondArray[i]);
    }

    return 0;
}