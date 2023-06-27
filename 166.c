// 166 - create a file & close it
#include <stdio.h>
int main() {

    FILE *file;

    // fopen("fileName", "fileMode");
    file = fopen("test.txt", "w"); // w = write
    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");
        fclose(file); // close file
    }

    return 0;
}