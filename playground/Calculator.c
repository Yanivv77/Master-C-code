#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

double squareRoot(double num) {
    double result = num;
    double epsilon = 0.00001;

    while ((result - num / result) > epsilon) {
        result = (result + num / result) / 2.0;
    }

    return result;
}

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, p, s): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case '-':
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case '*':
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case '/':
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 'p':
            printf("Enter the exponent: ");
            scanf("%lf", &num2);
            result = power(num1, (int)num2);
            printf("Result: %lf\n", result);
            break;
        case 's':
            result = squareRoot(num1);
            if(num1 < 0)
            {
                printf("Error: negtive squareRoot\n");
                break;
            }
            printf("Result: %lf\n", result);
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}