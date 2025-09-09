#include <stdio.h>

// Function declarations
int getNumber();            // Type 3: no arguments, returns number
void checkArmstrong(int n); // Normal function

int main() {
    int n = getNumber();    // Get number from function
    checkArmstrong(n);      // Pass to checking function
    return 0;
}

// Function to get input from user
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to check and print Armstrong status
void checkArmstrong(int n) {
    int original = n, remainder, result = 0;

    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
