#include <stdio.h>

// Function without parameters but with return type

int getSquare(); //declaration

void main() {
    int result = getSquare();  // function call
    printf("Square = %d\n", result);
}

int getSquare() {  //function defination
    int n;
    printf("Enter a number for square:");
    scanf("%d", &n);
    return n * n;
}
