#include <stdio.h>

// Function without parameters but with return type
int getMax();              //function declaration

int main() {
	int result = getMax();                    // function call
	printf("Largest number = %d\n", result);
}

int getMax() {                                //funation defination
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	
	if (a > b)
		return a;
	else
		return b;
}
