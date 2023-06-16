// 44 - if ,  else if , else condition
#include <stdio.h>
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is greater than %d\n", num2, num1);
    } else {
        printf("Numbers are equal\n");
    }

    return 0;
}