#include <stdio.h>
#include <string.h>

// Define a structure for a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a structure variable
    struct Person person1;

    // Assign values to the structure members
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    // Access and print the structure members
    printf("\nPerson Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Person Height: %.2f\n", person1.height);

    return 0;
}