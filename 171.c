// 171 - Read a file using fgets
#include <stdio.h>
int main() {

    FILE *file;
    char ch[50];

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("test.txt", "r"); 
    // file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "a"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");

        // fgets(variable, size, filePointer);
        // write test.txt file: Name = mostafizur rahman fuad, Age = 25
        while (!feof(file)) { 
            fgets(ch, 40, file);
            printf("%s\n", ch); 
        }
        
        fclose(file); // close file
    }

    return 0;
}