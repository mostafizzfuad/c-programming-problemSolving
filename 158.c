// 158 -  change custom data type name
#include <stdio.h>
// structure declaration
struct book {
    char name[30];
    int price;
};

int main() {

    typedef struct book BOOK; // using BOOK instead of book
    BOOK b = {"Need English Grammar", 450};

    printf("Book name = %s\n", b.name);
    printf("Book price = %d\n", b.price);

    return 0;
}