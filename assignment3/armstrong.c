#include <stdio.h>

int main() {
    int no = 153;
    int original = no;
    int sum = 0;
    int rem;

    while (no > 0) {
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
