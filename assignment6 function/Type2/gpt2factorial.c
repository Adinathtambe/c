#include <stdio.h>

int getNumber();       // Type 3
int factorialCalc(int n);  // Regular function

int main() {
    int n = getNumber();
    int fact = factorialCalc(n);

    printf("Factorial: %d\n", fact);

    return 0;
}

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int factorialCalc(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
