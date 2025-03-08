#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input a single integer greater than 0
    scanf("%d", &n);

    // Check if the number is less than or equal to 1
    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0; // Number is not prime
            break;
        }
    }

    // Output based on the prime check
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
