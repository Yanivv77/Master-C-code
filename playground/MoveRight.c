#include <stdio.h>
void moveRight(int arr[], int size, int n) {
    int i, j;

    // Perform the right shift 'n' times
    for (i = 0; i < n; i++) {
        int temp = arr[size - 1];

        // Shift elements to the right
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i, n;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Enter the number of times to move right: ");
    scanf("%d", &n);

    moveRight(numbers, size, n);

    printf("Array after moving right %d times: ", n);
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
