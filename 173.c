// 173 - Read a file using fscanf (multiple variable)
#include <stdio.h>
int main() {

    FILE *file;
    char fname[20];
    char lname[20];

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
        // write test.txt file: mostafizur rahman
        fscanf(file, "%s %s", &fname, &lname);
        printf("%s %s\n", fname, lname);
        
        fclose(file); // close file
    }

    return 0;
}