#include <stdio.h>

                                  // Function declaration
int add(int a, int b);

int main() {
	int num1, num2, result;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	                             // Function call with arguments
	result = add(num1, num2);

	printf("Sum = %d\n", result);
	return 0;
}

                                 // Function definition
int add(int a, int b) {
	return a + b;                 // returns the result
}

//Explanation

//int add(int a, int b) ? function has arguments (a and b) and return type (int).
//
//We call it as add(num1, num2).
//
//Function returns the sum to main() using return.
//
//Finally, main prints the result.
