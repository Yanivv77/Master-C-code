#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the difference between two numbers
int difference(int a, int b) {
    return a - b;
}

// Function to calculate the product of two numbers
int product(int a, int b) {
    return a * b;
}

// Function to calculate the quotient of two numbers
double quotient(int a, int b) {
    if (b != 0) {
        return (double)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0.0;
    }
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calling the functions and printing the results
    printf("Sum: %d\n", sum(num1, num2));
    printf("Difference: %d\n", difference(num1, num2));
    printf("Product: %d\n", product(num1, num2));
    printf("Quotient: %lf\n", quotient(num1, num2));

    return 0;
}