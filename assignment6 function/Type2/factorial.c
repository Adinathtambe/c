#include <stdio.h>

// Function without parameters but with return type
int getFactorial() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int result = getFactorial();  // function call
    printf("Factorial = %d\n", result);
    return 0;
}
