#include <stdio.h>

// Function declaration
int isArmstrong(int n);  // Type 4

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check return value
    if (isArmstrong(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

// Function to return 1 if Armstrong, else 0
int isArmstrong(int n) {
    int original = n, remainder, result = 0;

    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    return (result == original);
}
