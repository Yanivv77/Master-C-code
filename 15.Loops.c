#include <stdio.h>

int main() {
    int i, j;

    // For loop example
    printf("\nFor loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop example
    printf("\nWhile loop:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-While loop example
    printf("\nDo-While loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    // Nested loops example
    printf("\nNested loops:\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d,%d ", i, j);
        }
        printf("\n");
    }

    // Break statement example
    printf("\nBreak statement:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Continue statement example
    printf("\nContinue statement:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}