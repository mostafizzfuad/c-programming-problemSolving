// 69 - goto statement
#include <stdio.h>
int main() {

    int i = 1;
    
    print:
        printf("%d \t", i);
        i++;

    if (i < 5) {
        goto print; // label is calling here
    }

    return 0;
}