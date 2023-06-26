// 153 -  Array within structure
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    double salary;
};

int main() {

    struct Person person[4];

    // input
    for (int i = 0; i < 4; i++) {
        printf("\nEnter the information for person %d\n", i + 1);

        printf("Enter name = ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter age = ");
        scanf("%d", &person[i].age);

        printf("Enter salary = ");
        scanf("%lf", &person[i].salary);
    }

    // output
    for (int i = 0; i < 4; i++) {
        printf("\n\nInformation for person %d\n", i + 1);
        printf("Name = %s\n", person[i].name);
        printf("Age = %d\n", person[i].age);
        printf("Salary = %.2lf\n", person[i].salary);
    }

    return 0;
}