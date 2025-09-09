#include <stdio.h>

// Function declarations
void checkStrong(int n);  // Type 2
int factorial(int digit);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkStrong(n);

    return 0;
}

int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

void checkStrong(int n) {
    int original = n, sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
        printf("Strong\n");
    else
        printf("Not Strong\n");
}
