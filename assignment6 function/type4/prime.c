#include <stdio.h>

// Function declaration
int isPrime(int n);  // Type 4: takes argument, returns result

int main() {
    int n;

    // Input in main
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call function and check return value
    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

// Function to return 1 if prime, 0 otherwise
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}
