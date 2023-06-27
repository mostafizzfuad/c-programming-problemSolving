// 167 - Writing to a file using fputc
#include <stdio.h>
int main() {

    FILE *file;
    char name[30] = "Mostafizur Rahman";
    int length = strlen(name);

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "r"); 
    // file = fopen("test.txt", "a"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");
        for (int i = 0; i < length; i++) {
            fputc(name[i], file);
        }
        printf("File is written successfully\n");
        fclose(file); // close file
    }

    return 0;
}