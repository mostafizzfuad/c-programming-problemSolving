// 169 - Writing to a file using fprintf
#include <stdio.h>
int main() {

    FILE *file;
    char name[30];
    int age;

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
        printf("Enter your age = ");
        scanf("%d", &age);
        
        // fprintf(filePointer, formateSpecifier, variable);
        fprintf(file, "Name = %s, Age = %d\n", name, age);

        printf("File is written successfully\n");
        fclose(file); // close file
    }

    return 0;
}