// 138 -  Write a program to check a string palindrome or not ?
#include <stdio.h>
int main() {

    char first[40], second[40];

    printf("Enter first string = ");
    gets(first);
    printf("before reverse = %s\n", first);

    int len = strlen(first);

    int i, j;
    for (j = 0, i = len - 1; i >= 0; i--, j++) {
        second[j] = first[i];
    } 
    second[j] = '\0';
    printf("after reverse = %s\n", second);

    // string comparison
    int rtn = strcmp(first, second); // same = 0, different = 1
    
    if (rtn == 0) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}