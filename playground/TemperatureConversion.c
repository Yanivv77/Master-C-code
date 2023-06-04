#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    double temperature;

    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the temperature in Celsius: ");
            scanf("%lf", &temperature);
            printf("Equivalent temperature in Fahrenheit: %.2lf\n", celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("Enter the te1mperature in Fahrenheit: ");
            scanf("%lf", &temperature);
            printf("Equivalent temperature in Celsius: %.2lf\n", fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}