#include <stdio.h>

void factorial(int n);  // Type 2

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}

void factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial: %d\n", fact);
}
