// 79 -  Strong Number  (কোনো একটা নাম্বারের ডিজিটগুলোর ফ্যাক্টোরিয়ালের যোগফল যদি মূল নাম্বারের সমান হয়, তাহলে তাকে Strong number বলে)  ==>  [ 145 = 1+24+120 = 145 ]
#include <stdio.h>
int main() {

    int num, temp, rem, sum = 0;
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        rem = temp % 10;

        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (num == sum) printf("Strong number\n");
    else printf("Not a strong number\n");

    return 0;
}