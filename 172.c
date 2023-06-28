// 172 - Read a file using fscanf (single variable)
#include <stdio.h>
int main() {

    FILE *file;
    char name[50];

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("test.txt", "r"); 
    // file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "a"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");

        // fscanf(filePointer, formateSpecifier, varName);
        // write test.txt file: mostafizur
        fscanf(file, "%s", &name);
        printf("%s\n", name);
        
        fclose(file); // close file
    }

    return 0;
}