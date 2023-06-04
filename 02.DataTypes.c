#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer types
    int integer = 10; // Range: -2147483648 to 2147483647 (4 bytes) - %d
    long longInteger = 1000; // Range: -2147483648 to 2147483647 (4 bytes) - %ld
    short shortInteger = 5; // Range: -32768 to 32767 (2 bytes) - %hd
    unsigned short int unsignedShortInteger = 65535; // Range: 0 to 65535 (2 bytes) - %hu
    long long veryLongInteger = 100000; // Range: -9223372036854775808 to 9223372036854775807 (8 bytes) - %lld

    // Floating-point types
    float floatingPoint = 3.14; // Significant digits: 6-7 (approximately) (4 bytes) - %f
    double doublePrecision = 3.14159; // Significant digits: 15-16 (approximately) (8 bytes) - %lf

    // Character type
    char character = 'A'; // Range: -128 to 127 (ASCII values) (1 byte) - %c

    // Boolean type
    bool boolean = true; // Range: true or false (1 byte) - %d (prints as 0 or 1)

    // ASCII characters
    char uppercaseA = 65; // Range: 65 to 90 (ASCII values) (1 byte) - %c

    // Unsigned char
    unsigned char value = 200; // Range: 0 to 255 (1 byte) - %u

    // Displaying the values
    printf("Integer: %d\n", integer);
    printf("Long integer: %ld\n", longInteger);
    printf("Short integer: %hd\n", shortInteger);
    printf("Unsigned short integer: %hu\n", unsignedShortInteger);
    printf("Very long integer: %lld\n", veryLongInteger);
    printf("Floating-point: %f\n", floatingPoint);
    printf("Double precision: %lf\n", doublePrecision);
    printf("Character: %c\n", character);
    printf("Boolean: %d\n", boolean);
    printf("Uppercase A: %c\n", uppercaseA);
    printf("Unsigned char value: %u\n", value);
    printf("Size of unsigned char: %zu bytes\n", sizeof(value));

    return 0;
}