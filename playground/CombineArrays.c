#include <stdio.h>

#define SIZE1 5
#define SIZE2 3

void combineArrays(int arr1[], int size1, int arr2[], int size2, int combined[]) {
    int i, j;

    // Copy elements of the first array to the combined array
    for (i = 0; i < size1; i++) {
        combined[i] = arr1[i];
    }

    // Copy elements of the second array to the combined array
    for (j = 0; j < size2; j++) {
        combined[size1 + j] = arr2[j];
    }
}

int main() {
    int arr1[SIZE1] = {1, 2, 3, 4, 5};
    int arr2[SIZE2] = {6, 7, 8};
    int combined[SIZE1 + SIZE2];

    printf("Array 1: ");
    for (int i = 0; i < SIZE1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < SIZE2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Combine the arrays
    combineArrays(arr1, SIZE1, arr2, SIZE2, combined);

    printf("Combined array: ");
    for (int i = 0; i < SIZE1 + SIZE2; i++) {
        printf("%d ", combined[i]);
    }
    printf("\n");

    return 0;
}