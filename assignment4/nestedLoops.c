#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (int i = 1; i <= n; i++) {
        int original = i;
        int temp = i;
        int digits = 0;

        // Count number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        int sum = 0;

        // Calculate sum of digits raised to the power of 'digits'
        while (temp != 0) {
            int digit = temp % 10;
            int power = 1;

            // Calculate digit^digits
            for (int j = 0; j < digits; j++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        // Check if sum equals original number
        if (sum == original) {
            printf("%d\n", original);
        }
    }

    return 0;
}
