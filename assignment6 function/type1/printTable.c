#include <stdio.h>

// Function declaration: No arguments, no return value
void printTable();

int main() {
    // Call the function
    printTable();
    return 0;
}

// Function definition
void printTable() {
    int n;

    // Take input inside the function
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print multiplication table of n
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n"); // Move to next line after printing table
}
