// 67 - infinity loop
#include <stdio.h>
int main() {

    // infinite loop
    int i = 1;
    while (i < 10) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}