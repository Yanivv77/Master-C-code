#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void findPrimes(int n) {
    int count = 0;
    int num = 2;

    printf("First %d prime numbers:\n", n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    findPrimes(N);

    return 0;
}