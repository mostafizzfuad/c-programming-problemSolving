// 70 -  Multiplication Table
/*******
    Enter any number = num
    num x i = num * i
    3 x 1 = 3
    ..........
    ..........
    3 x 10 = 30
********/
#include <stdio.h>
int main() {

    int num;
    scanf("%d", &num);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}