// 66 - difference between for, while and do-while loop
#include <stdio.h>
int main() {

    int i = 11;

    // for loop
    for (int i = 11; i < 10; i++) {
        printf("%d\n", i);
    }

    // while loop
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    
    // do while loop (at least, one time print)
    do {
        printf("%d\n", i);
        i++;
    } while (i<=10);

    return 0;
}