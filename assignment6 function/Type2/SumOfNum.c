#include <stdio.h>

// Function declarations
int getSum();  // Type 3: no arguments, returns value

int main() {
    // Get the sum from the function
    int total = getSum();

    // Print the result
    printf("Sum: %d\n", total);
    return 0;
}

// Function to take input and return the sum
int getSum() {
    int start, end, sum = 0;

    // Take input inside the function
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    // Compute sum
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;  // Return the result
}
