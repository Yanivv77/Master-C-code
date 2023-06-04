#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10;
    int b = 4;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("Arithmetic Operators:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    // Relational operators
    int x = 5;
    int y = 8;
    int result;

    result = x < y;
    printf("\nRelational Operators:\n");
    printf("%d < %d: %d\n", x, y, result);

    result = x > y;
    printf("%d > %d: %d\n", x, y, result);

    result = x <= y;
    printf("%d <= %d: %d\n", x, y, result);

    result = x >= y;
    printf("%d >= %d: %d\n", x, y, result);

    result = x == y;
    printf("%d == %d: %d\n", x, y, result);

    result = x != y;
    printf("%d != %d: %d\n", x, y, result);

    // Logical operators
    int p = 1;
    int q = 0;
    int logicalAnd = p && q;
    int logicalOr = p || q;
    int logicalNot = !p;

    printf("\nLogical Operators:\n");
    printf("Logical AND: %d\n", logicalAnd);
    printf("Logical OR: %d\n", logicalOr);
    printf("Logical NOT: %d\n", logicalNot);

    // Assignment operators
    int num = 10;
    num += 5;
    printf("\nAssignment Operators:\n");
    printf("num += 5: %d\n", num);

    num -= 2;
    printf("num -= 2: %d\n", num);

    num *= 3;
    printf("num *= 3: %d\n", num);

    num /= 2;
    printf("num /= 2: %d\n", num);

    num %= 4;
    printf("num %%= 4: %d\n", num);

    // Increment and decrement operators
    int count = 5;
    printf("\nIncrement and Decrement Operators:\n");
    printf("Initial count: %d\n", count);

    count++;
    printf("After count++: %d\n", count);

    ++count;
    printf("After ++count: %d\n", count);

    count--;
    printf("After count--: %d\n", count);

    --count;
    printf("After --count: %d\n", count);

    return 0;
}