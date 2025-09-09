#include <stdio.h>

// Function declaration
// This function takes an argument (n), but returns nothing
void printTable(int n);  // Type 2

int main() {
    int n;

    // Take input in main
    printf("Enter a number: ");
    scanf("%d", &n);

    // Pass the input to the function
    printTable(n);

    return 0;
}

// Function definition
void printTable(int n) {
    // Print the multiplication table of n
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }

    printf("\n");  // New line for clean output
}
