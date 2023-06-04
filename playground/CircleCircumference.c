#include <stdio.h>
#include <math.h>

double calculateCircleCircumference(double radius) {
    return 2 * M_PI * radius;
}

double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double circumference = calculateCircleCircumference(radius);
    double area = calculateCircleArea(radius);

    printf("Circle with radius %.2f\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}