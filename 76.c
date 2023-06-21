// 76 -  Palindrome Number  (ডিজিটগুলা  reverse করার পরও যদি নাম্বারটা  unchanged  থাকে তাহলে সেই নাম্বারকে  Palindrome Number বলে)  ==>  [ 121 => 121 ]
#include <stdio.h>
int main() {

    int num, temp, rem;
    scanf("%d", &num);

    temp = num;

    int sum = 0;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp /= 10;
    }

    if (num == sum) printf("Palindrome\n");
    else printf("Not Palindrome");

    return 0;
}