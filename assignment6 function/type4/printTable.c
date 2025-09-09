#include <stdio.h>

// Function declaration
// multiply() takes two arguments and returns the result
int multiply(int n, int i);  // Type 4

int main() {
    int n;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to print multiplication table using return values
    for (int i = 1; i <= 10; i++) {
        printf("%d ", multiply(n, i));  // Call multiply() with arguments
    }

    printf("\n");
    return 0;
}

// Function to return the multiplication of n and i
int multiply(int n, int i) {
    return n * i;  // Return the result
}
