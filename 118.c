// 118 -  Write a program to take some integers as input and display maximum
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

    // finding maximum
    int mx = num[0];
    for (int i = 1; i < n; i++) {
        if (mx < num[i]) {
            mx = num[i];
        }
    }

    printf("Maximum = %d\n", mx);

    return 0;
}