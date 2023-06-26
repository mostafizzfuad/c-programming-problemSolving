// 156 -  enum basic program
#include <stdio.h>
// enum
enum daysOfWeek {
    sun, mon, tues, wed, thus, fri, sat
};

int main() {

    enum daysOfWeek day1, day2;
    day1 = sun; // index = 0
    day2 = wed; // index = 3

    printf("Day 1 = %d\n", day1);
    printf("Day 2 = %d\n", day2);

    return 0;
}