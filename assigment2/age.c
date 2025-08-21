#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check and display the age category
    if (age < 12) {
        printf("Child\n");
    } else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    } else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    } else if (age >= 60) {
        printf("Senior\n");
    } else {
        printf("Invalid age input.\n");
    }

    return 0;
}
