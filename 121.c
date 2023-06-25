// 121 -  Write a program to search for a number using linear search ?
#include <stdio.h>
int main() {

    int num[30], n, value, position = -1;

    printf("How many numbers you need = ");
    scanf("%d", &n);

    // input values
    printf("Enter %d numbers = ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("Press the value which you want = ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++) {
        if (value == num[i]) {
            position = i + 1;
            break;
        }
    }

    if (position == -1) printf("value not found\n");
    else printf("Position = %d\n", position);

    return 0;
}