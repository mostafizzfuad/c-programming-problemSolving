//
#include <stdio.h>
int a = 10; /// global variable
int main() {

    int x = 20; /// local variable
    printf("Inside the main function a = %d\n", a);
    printf("Inside the main function x = %d\n", x);

    display();

    return 0;
}

void display() {
    printf("Inside the display function a = %d\n", a);
    // printf("Inside the display function x = %d\n", x); /// don't access the variable x
}