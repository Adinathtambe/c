#include <stdio.h>

// Function declaration
void checkPrime(int n);  // Type 2

int main() {
    int n;

    // Input in main
    printf("Enter a number: ");
    scanf("%d", &n);

    // Pass input to function
    checkPrime(n);

    return 0;
}

// Function to check and print prime status
void checkPrime(int n) {
    int i, isPrime = 1;

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

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}
