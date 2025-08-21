#include <stdio.h>

void main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else to find the greatest number
    if (a > b) {
        if (a > c) {
            printf("The greatest number is %d\n", a);
        } else {
            printf("The greatest number is %d\n", c);
        }
    } else {
        if (b > c) {
            printf("The greatest number is %d\n", b);
        } else {
            printf("The greatest number is %d\n", c);
        }
    }
}
