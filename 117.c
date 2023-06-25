// 117 -  Write a program to take some integers as input and output their sum & average
#include <stdio.h>
int main() {

    int num[100], sizeOfArray, sum = 0;

    // input array size
    printf("Enter array size = ");
    scanf("%d", &sizeOfArray);

    // input all value
    printf("Enter value = ");
    for (int i = 0; i < sizeOfArray; i++) {
        scanf("%d", &num[i]);
    }

    // calculate sum
    for (int i = 0; i < sizeOfArray; i++) {
        sum += num[i];
    }

    // calculate average
    double avg = (double)sum / sizeOfArray;

    // print sum and average
    printf("sum = %d\n", sum);
    printf("average = %lf\n", avg);

    return 0;
}