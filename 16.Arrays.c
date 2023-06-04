#include <stdio.h>

int main() {
    // Declaring and initializing an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements using index
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Modifying array elements
    numbers[2] = 10;
    printf("Modified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Finding the maximum element in the array
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum element: %d\n", max);

    return 0;
}