// 168 - Writing to a file using fputs
#include <stdio.h>
int main() {

    FILE *file;
    char name[30];

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "r"); 
    // file = fopen("test.txt", "a"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");

        printf("Enter your full name = ");
        gets(name);
        // fputs("String", filePointer);
        fputs(name, file);

        printf("File is written successfully\n");
        fclose(file); // close file
    }

    return 0;
}