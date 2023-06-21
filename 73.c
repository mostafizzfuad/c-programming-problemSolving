// 73 -  GCD & LCM
#include <stdio.h>
int main() {

    int num1, num2, n1, n2, rem;
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    while (n2 != 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int gcd = n1;
    int lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}