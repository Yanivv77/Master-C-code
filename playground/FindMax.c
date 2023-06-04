#include <stdio.h>

#define SIZE 5

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int numbers[SIZE] = {10, 5, 7, 13, 2};
    int maxNum;

    maxNum = findMax(numbers, SIZE);

    printf("The maximum number in the array is: %d\n", maxNum);

    return 0;
}