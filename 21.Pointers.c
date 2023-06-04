#include <stdio.h>

/*
Benefits of Pointers:

- Efficient program execution time.
- Working directly with the original variable.
- Creation of data structures like linked lists using pointers.
- Returning multiple values from functions.
- Searching and sorting large data easily.
- Dynamic memory allocation.

*/

#include <stdio.h>

void printAge(int *pAge)
{
    printf("your age: %d\n" , *pAge); //dereference
}
 
int main() {
    int age = 25;
    int *pAge = NULL;  
    pAge = &age; // Declare a pointer to an age
    
    
    printf("\nMemory address of age: %p\n", &age);
    printf("Value of pAge: %p\n\n", pAge);

    printf("size of age %p bytes \n", sizeof(age));
    printf("size of pAge %p bytes \n\n", sizeof(pAge));

   
    printf("Value of age: %d\n", age);
    printf("Value at stored address : %d\n\n", *pAge);

    printAge(pAge);
 

    return 0;
}
