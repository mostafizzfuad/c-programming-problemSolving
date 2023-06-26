// 148 -  Write a program that finding maximum value from an array using function
#include <stdio.h>
int size;

int maximum(int n[]) {
    int mx = n[0];
    for (int i = 1; i < size; i++) {
        if (mx < n[i]) {
            mx = n[i];
        }
    } return mx;
}

int main() {

    printf("Enter array size = ");
    scanf("%d", &size);

    int num[10];
    printf("Enter array value = ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    int maxValue = maximum(num);
    printf("Maximum value = %d\n", maxValue);

    return 0;
}