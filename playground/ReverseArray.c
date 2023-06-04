#include <stdio.h>

#define SIZE 5

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end pointers
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Reverse the array
    reverseArray(numbers, SIZE);

    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}