// 147 -  Write a program that Passes Array to function ?
#include <stdio.h>
int size;

void display(int n[]) {
    printf("You have pressed = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", n[i]);
    }
}

int main() {

    printf("Enter array size = ");
    scanf("%d", &size);

    int num[10];
    printf("Enter array value = ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    display(num);

    return 0;
}