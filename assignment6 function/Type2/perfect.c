#include <stdio.h>

int getNumber();        // Type 3
void checkPerfect(int); // Regular function

int main() {
    int n = getNumber();
    checkPerfect(n);
    return 0;
}

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
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
