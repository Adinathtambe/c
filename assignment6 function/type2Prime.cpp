#include <stdio.h>

// Function without parameters but with return type

int isPrime();

void main() {

	int result;

	// function call
	result = isPrime();

	if(result) {
		printf("prime");
	} else {
		printf("Not prime");
	}
//	printf("%d\n", result);

}

int isPrime() {
	int n;
	printf("Enter two numbers:");
	scanf("%d", &n);

	if (n>0) {                   // returning result
		for (int i=2; i<n; i++) {
			if(n%i==0) {
				return 0;
			}
		}
		return 1;
	}
}
