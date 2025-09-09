#include <stdio.h>

// Function declaration
void checkArmstrong();  // Type 1

int main() {
    checkArmstrong();  // Call the function
    return 0;
}

// Function definition
void checkArmstrong() {
    int n, original, remainder, result = 0;

    // Input inside the function
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Compute sum of cubes of digits
    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    // Check if Armstrong
    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
