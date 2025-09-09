#include <stdio.h>

// Function declaration
void factorial();             // Type 1

int main() {
    factorial();              // Call function
    return 0;
}

void factorial() {            // function defination
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial: %d\n", fact);
}
