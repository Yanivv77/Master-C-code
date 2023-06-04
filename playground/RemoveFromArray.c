#include <stdio.h>

#define SIZE 10

void removeNumber(int arr[], int *size, int num) {
    int i, j;

    // Search for the number to be removed
    for (i = 0; i < *size; i++) {
        if (arr[i] == num) {
            // Shift elements after the removed number to the left
            for (j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            i--; // Decrement i to re-check the same index in the next iteration
        }
    }
}

int main() {
    int numbers[SIZE] = {1, 3, 5, 2, 4, 6, 3, 7, 8, 9};
    int size = SIZE;
    int num, i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Enter the number to remove: ");
    scanf("%d", &num);

    // Call the removeNumber function
    removeNumber(numbers, &size, num);

    printf("Array after removing %d: ", num);
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}