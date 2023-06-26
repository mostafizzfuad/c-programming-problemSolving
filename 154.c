// 154 -  passing structure variable to function
#include <stdio.h>
// structure declaration
struct Person {
    char name[50];
    int age;
    double salary;
};
// function declaration
void display(struct Person p1) {
    printf("Name = %s\n", p1.name);
    printf("Age = %d\n", p1.age);
    printf("Name = %.2lf\n", p1.salary);
}

int main() {

    struct Person person1;
    strcpy(person1.name, "Mostafizur Rahman");
    person1.age = 25;
    person1.salary = 65000;

    display(person1);

    return 0;
}