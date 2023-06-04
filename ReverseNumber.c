#include <stdio.h>

int main() {
    int number = 354;

    unsigned ones_digit, tens_digit, hundreds_digit;

    hundreds_digit = number / 100;
    tens_digit = (number / 10) % 10;
    ones_digit = number % 10;

    printf("%u\n", hundreds_digit);
    printf("%u\n", tens_digit);
    printf("%u\n", ones_digit);

    int count = 0;
    while (count != 10) {
    count += 3;
    printf("%u\n", count);

}

    return 0;
}