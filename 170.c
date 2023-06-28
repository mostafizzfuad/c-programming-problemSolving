// 170 - Read a file using fgetc
#include <stdio.h>
int main() {

    FILE *file;
    char ch;

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("test.txt", "r"); 
    // file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "a"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");

        while (!feof(file)) { // feof(file) = file end of
            ch = fgetc(file);
            printf("%c", ch);
        }
        
        fclose(file); // close file
    }

    return 0;
}