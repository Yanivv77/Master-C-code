#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 0;
    int result;

    // Logical AND (&&) example
    result = (a > b) && (b > c);
    printf("(%d > %d) && (%d > %d) : %d\n", a, b, b, c, result);

    // Logical OR (||) example
    result = (a > b) || (b > c);
    printf("(%d > %d) || (%d > %d) : %d\n", a, b, b, c, result);

    // Logical NOT (!) example
    result = !(a > b);
    printf("!(%d > %d) : %d\n", a, b, result);

    return 0;
}
