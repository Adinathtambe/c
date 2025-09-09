#include <stdio.h>

// Function declarations
int getNumber();  // Type 3: no arguments, returns value
void checkPrime(int n);  // Regular function

int main() {
    int n = getNumber();  // Get number from function
    checkPrime(n);        // Pass to checker function
    return 0;
}

// Function to input and return number
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
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
