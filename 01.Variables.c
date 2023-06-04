#include <stdio.h>

int main()
{

// Variables - allcoated space in memory to store a value

   int x; //declaration
   x = 123; // initalization 
   int y = 312; // declaration + initalization 


   int age = 29; // interger
   float gpa = 2.05; // floating point number 
   char grade  = 'A'; //single character 
   char name[] = "Yaniv"; //string - array of characters 

   printf("My name %s\n", name);
   printf("My age %d years old", age);
   printf("My average grade is %c\n ", grade);
   printf("My gpa is %f\n ", gpa);


   return 0;
}
