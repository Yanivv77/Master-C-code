#include <stdio.h>

int main() {
    int intValue = 10;
    float floatValue = 3.14159;
    double doubleValue = 123456.7890123456;
    char charValue = 'A';
    char stringValue[] = "Hello, World!";
    unsigned int unsignedValue = 42;

    // Displaying the values using format specifiers
    printf("Integer (%%d): %d\n", intValue);
    printf("Float (%%f): %.2f\n", floatValue);
    printf("Double (%%lf): %.10lf\n", doubleValue);
    printf("Character (%%c): %c\n", charValue);
    printf("String (%%s): %s\n", stringValue);
    printf("Unsigned Integer (%%u): %u\n", unsignedValue);

    // Displaying the values in different formats
    printf("Hexadecimal (%%#x): %#x\n", intValue);
    printf("Octal (%%#o): %#o\n", intValue);
    printf("Scientific Notation (%%.3e): %.3e\n", doubleValue);

    // Displaying the sizes of data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}