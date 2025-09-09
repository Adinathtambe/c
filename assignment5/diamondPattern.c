
#include <stdio.h>

void main() {
	int i, j, n;

	printf("Enter number of rows for the upper half of diamond: ");
	scanf("%d", &n);

	// Upper half of diamond (including middle row)
	for (i = 1; i <= n; i++) {
		// Print spaces
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		// Print stars
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Lower half of diamond
	for (i = n - 1; i >= 1; i--) {
		// Print spaces
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		// Print stars
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	
}
