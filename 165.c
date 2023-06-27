// 165 -  Access array elements using pointer
#include <stdio.h>
int main() {

    int a[5] = {10, 20, 30, 40, 50};
    int *p;

    p = &a[0];
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}