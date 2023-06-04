#include <stdio.h>

// Function to check if a triangle is a right triangle
int isRightTriangle(int a, int b, int c) {
    // Calculate the squares of the side lengths
    int aSquared = a * a;
    int bSquared = b * b;
    int cSquared = c * c;

    // Check the Pythagorean theorem
    if ((aSquared + bSquared) == cSquared ||
        (aSquared + cSquared) == bSquared ||
        (bSquared + cSquared) == aSquared) {
        return 1; // Triangle is a right triangle
    } else {
        return 0; // Triangle is not a right triangle
    }
}

int main() {
    int sideA, sideB, sideC;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side A: ");
    scanf("%d", &sideA);
    printf("Side B: ");
    scanf("%d", &sideB);
    printf("Side C: ");
    scanf("%d", &sideC);

    // Check if the triangle is a right triangle
    if (isRightTriangle(sideA, sideB, sideC)) {
        printf("The triangle is a right triangle.\n");
    } else {
        printf("The triangle is not a right triangle.\n");
    }

    return 0;
}