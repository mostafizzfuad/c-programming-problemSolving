// 77 -  Armstrong Number  (যে সকল সংখ্যার প্রতিটি ডিজিটকে কিউব করে তাদের যোগফল হিসেবে যদি মূল সংখ্যাটাই পাওয়া যায়, তাহলে সেগুলাকে Armstrong Number বলে)  ==>  [ 153 =>  1^3 + 5^3 + 3^3  = 153 ]
#include <stdio.h>
int main() {

    int num, temp, rem;
    scanf("%d", &num);

    temp = num;

    int sum = 0;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp /= 10;
    }

    if (num == sum) printf("Armstrong number\n");
    else printf("Not Armstrong number");

    return 0;
}