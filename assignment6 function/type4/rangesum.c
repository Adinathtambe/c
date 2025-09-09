#include <stdio.h>

// Function declaration
int findSum(int start, int end);  // Type 4

int main() {
    int start, end;

    // Take input
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    // Call the function and store the result
    int total = findSum(start, end);

    // Print the result
    printf("Sum: %d\n", total);

    return 0;
}

// Function to calculate and return the sum
int findSum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;  // Return the result
}
