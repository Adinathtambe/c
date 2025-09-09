#include <stdio.h>

// Function declaration
void findSum();  // Type 1: no arguments, no return

int main() {
    findSum();  // Call the function
    return 0;
}

// Function definition
void findSum() {
    int start, end, sum = 0;

    // Take input inside the function
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    // Compute sum from start to end
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Print result
    printf("Sum: %d\n", sum);
}
