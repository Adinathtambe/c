#include <stdio.h>

// Function declarations
// getNumber() takes no arguments but returns an integer
// printTable() prints the table of the number passed to it
int getNumber();           // Type 3
void printTable(int n);    // Regular function

int main() {
    // Call getNumber() to get the input from user
    int n = getNumber();

    // Call printTable() to print the table
    printTable(n);

    return 0;
}

// Function to take input and return it
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;  // Return the entered number to main
}

// Function to print table
void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }

    printf("\n");
}
