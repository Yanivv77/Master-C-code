#include <stdio.h>

#define PI 3.14159
#define MAX_VALUE 100

int main() {
    const int MIN_VALUE = 0;
    const char NEW_LINE = '\n';

    int radius = 5;
    int area = PI * radius * radius;

    printf("The maximum value is: %d\n", MAX_VALUE);
    printf("The minimum value is: %d\n", MIN_VALUE);
    printf("The area of the circle is: %d\n", area);
    printf("New line character: %c", NEW_LINE);

    return 0;
}