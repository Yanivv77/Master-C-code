#include <stdio.h>
#include <math.h>

int main() {
    double num = 4.5;

    // Square root
    double squareRoot = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, squareRoot);

    // Absolute value
    double absoluteValue = fabs(num);
    printf("Absolute value of %.2f is %.2f\n", num, absoluteValue);

    // Power
    double power = pow(num, 2);
    printf("%.2f raised to the power of 2 is %.2f\n", num, power);

    // Trigonometric functions
    double angle = 45.0;
    double radians = angle * (M_PI / 180.0);

    double sineValue = sin(radians);
    double cosineValue = cos(radians);
    double tangentValue = tan(radians);

    printf("Sine of %.2f degrees is %.2f\n", angle, sineValue);
    printf("Cosine of %.2f degrees is %.2f\n", angle, cosineValue);
    printf("Tangent of %.2f degrees is %.2f\n", angle, tangentValue);

    // Ceiling and floor
    double value = 3.7;
    double ceilValue = ceil(value);
    double floorValue = floor(value);

    printf("Ceiling value of %.2f is %.2f\n", value, ceilValue);
    printf("Floor value of %.2f is %.2f\n", value, floorValue);

    return 0;
}