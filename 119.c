// 119 -  Write a program to take some integers as input and display minimum
#include <stdio.h>
int main() {

    int num[100], n;

    // input array size
    printf("How many numbers = ");
    scanf("%d", &n);

    // input all value
    printf("Enter value = ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // finding minimum
    int mn = num[0];
    for (int i = 1; i < n; i++) {
        if (mn > num[i]) {
            mn = num[i];
        }
    }

    printf("Minimum = %d\n", mn);

    return 0;
}