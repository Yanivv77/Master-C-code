#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, sum, product;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");

    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");

    // Read the second number from the user
    scanf("%d", &num2);

    // Perform addition and store the result in sum
    sum = num1 + num2;

    // Perform multiplication and store the result in product
    product = num1 * num2;

    // Display the sum and product
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    // Read a word from the user until a space is encountered and store it in the word variable
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    // Display the entered word
    printf("You entered: %s\n", word);


    while ((getchar()) != '\n');
    //Working With Strings
    char FullName[50];

    // Prompt the user to enter a full name
    printf("Enter a full name: ");

    // Read the full name using fgets
    fgets(FullName, sizeof(FullName), stdin);


    // Print the full name
    printf("You entered: %s\n", FullName);

    return 0;

 
}