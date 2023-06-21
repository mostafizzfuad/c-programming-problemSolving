// 72 -  Prime Number
#include <stdio.h>
int main() {

    int num, count = 0;
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) printf("Prime number\n");
    else printf("Not Prime number\n");

    return 0;
}