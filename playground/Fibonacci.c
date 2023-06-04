#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci sequence:\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &numTerms);

    fibonacci(numTerms);

    return 0;
}