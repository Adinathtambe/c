#include <stdio.h>

// Function declaration: Takes input (argument), but doesn't return anything
void printTable(int n);

int main() {
    int n;

    // Take input in main
    printf("Enter a number: ");
    scanf("%d", &n);

    // Pass input to the function
    printTable(n);

    return 0;
}

// Function definition
void printTable(int n) {
    // Print multiplication table of n
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
}

