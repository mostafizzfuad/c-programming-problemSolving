// 174 - storing student details
#include <stdio.h>
int main() {

    FILE *file;
    char name[25];
    int age, phoneNumber, num;

    // fopen("fileName", "fileMode"); 
    // mode : w - overWrite, r - read, a - add / append
    file = fopen("student.txt", "a"); 
    // file = fopen("test.txt", "w"); 
    // file = fopen("test.txt", "r"); 

    if (file == NULL) {
        printf("File doesn't exist\n");
    } else {
        printf("File is opened\n");

        printf("Enter number of students = ");
        scanf("%d", &num);

        for (int i = 0; i < num; i++) {
            printf("Enter student name = ");
            scanf("%s", &name);
            printf("Enter student age = ");
            scanf("%d", &age);
            printf("Enter student phone number = ");
            scanf("%d", &phoneNumber);
            fprintf(file, "\n%s\t\t%d\t\t%d\n", name, age, phoneNumber);
        }
        
        fclose(file); // close file
    }

    return 0;
}