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

        // 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and modifying 2D array elements
    printf("2D Array elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Array of strings
    char names[][20] = {"Alice", "Bob", "Charlie", "David", "Eve"};

    // Print the  array of strings
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
        printf("%s\n", names[i]);
    }
    printf("\n");

    return 0;
}