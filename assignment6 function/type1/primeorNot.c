#include <stdio.h>

// Function declaration
void checkPrime();  // Type 1: no arguments, no return

int main() {
    checkPrime();  // Call the function
    return 0;
}

// Function definition
void checkPrime() {
    int n, i, isPrime = 1;

    // Input inside the function
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}