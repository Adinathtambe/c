#include <stdio.h>

int factorial(int n);  // Type 4

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n);

    printf("Factorial: %d\n", fact);

    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
