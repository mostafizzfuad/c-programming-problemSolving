// 151 -  simple structure program 
#include <stdio.h>

// global structure
struct Person { // Person => datatypes
    int age; // member of the Person structure.
    double salary;
};

int main() {
    /************* local structure ****************
    struct Person { 
        int age; 
        double salary;
    };
    **********************************************/
    struct Person person1, person2;

    person1.age = 27;
    person1.salary = 25000.5;
    person2.age = 25;
    person2.salary = 30000;

    printf("Person 1:\n");
    printf("age = %d\n", person1.age);
    printf("salary = %lf\n", person1.salary);

    printf("\nPerson 2:\n");
    printf("age = %d\n", person2.age);
    printf("salary = %lf\n", person2.salary);

    return 0;
}