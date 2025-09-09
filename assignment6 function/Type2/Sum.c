#include <stdio.h>

// Function without parameters but with return type
int getSum() {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	return a + b; // returning result
}
void main() {
	int result;

	// function call
	result = getSum();
	
	printf("Sum = %d\n", result);

}
