#include <stdio.h>

void checkPerfect(int n);  // Type 2

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPerfect(n);

    return 0;
}

void checkPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}
