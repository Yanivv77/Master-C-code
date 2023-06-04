#include <stdio.h>
#include <string.h>

// Define a structure for a person
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    // Declare an array of structures
    Person people[3];

    // Assign values to the structure members
    strcpy(people[0].name, "John Doe");
    people[0].age = 25;
    people[0].height = 1.75;

    strcpy(people[1].name, "Alice Smith");
    people[1].age = 30;
    people[1].height = 1.65;

    strcpy(people[2].name, "Bob Johnson");
    people[2].age = 28;
    people[2].height = 1.80;

    // Access and print the structure members for each person
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f\n", people[i].height);
        printf("\n");
    }

    return 0;
}
