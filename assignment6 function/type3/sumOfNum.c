#include <stdio.h>

// Function declaration
void findSum(int start, int end);  // Type 2

int main() {
    int start, end;

    // Take input in main
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    // Pass input to function
    findSum(start, end);

    return 0;
}

// Function to compute and print sum
void findSum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    printf("Sum: %d\n", sum);
}
