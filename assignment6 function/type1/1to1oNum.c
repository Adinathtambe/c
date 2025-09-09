#include <stdio.h>

// Function declaration
void printNumbers();  // Type 1: no arguments, no return value

int main() {
    printNumbers();  // Call the function
    return 0;
}

                            // Function definition
void printNumbers() {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");           // For clean output
}