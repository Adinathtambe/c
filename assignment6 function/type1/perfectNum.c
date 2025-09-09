#include <stdio.h>

// Function declaration
void checkPerfect();  // Type 1

int main() {
    checkPerfect();
    return 0;
}

void checkPerfect() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find sum of divisors excluding the number itself
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if perfect
    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}
