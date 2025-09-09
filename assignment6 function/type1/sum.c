#include <stdio.h>

// Function declaration
void sum();  // Type 1: no arguments, no return value

int main() {
    sum();  // Call the function
    return 0;
}

// Function definition
void sum() {
    int a, b, result;

    // Input inside the function
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = a + b;

    // Output inside the function
    printf("The sum is: %d\n", result);
}
