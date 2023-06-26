// 152 -  user input , direct initialization , assign & comparison
#include <stdio.h>

struct Person {
    int age;
    double salary;
};

int main() {

    struct Person person2 = {25, 40000}; // direct initialization
    struct Person person1, person3;

    // assign
    person3 = person2;

    // input person1 info
    printf("Enter the information of person 1 : \n");
    printf("Enter age = ");
    scanf("%d", &person1.age);
    printf("Enter salary = ");
    scanf("%lf", &person1.salary);

    // print person1 info
    printf("\nPerson 1:\n");
    printf("age = %d\n", person1.age);
    printf("salary = %lf\n", person1.salary);

    // print person2 info
    printf("\nPerson 2:\n");
    printf("age = %d\n", person2.age);
    printf("salary = %lf\n", person2.salary);

    // print person3 info
    printf("\nPerson 3:\n");
    printf("age = %d\n", person3.age);
    printf("salary = %lf\n", person3.salary);

    // comparison
    if (person1.age == person2.age && person1.salary == person2.salary) {
        printf("person1 and person2 are equal\n");
    } else {
        printf("person1 and person2 are not equal\n");
    }

    return 0;
}