#include <stdio.h>

// Function declarations
int factorial(int digit);
int isStrong(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isStrong(n))
        printf("Strong\n");
    else
        printf("Not Strong\n");

    return 0;
}

int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int n) {
    int original = n, sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return (sum == original);
}
