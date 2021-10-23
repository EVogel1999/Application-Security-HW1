#include <stdio.h>
#include <stdlib.h>

int main() {
	// Get user input and check
	int num = 0;
	printf("Enter an integer:\n");
	int check = scanf("%d", &num);
	if (check != 1) {
		printf("Incorrect Input");
		return 0;
	}
	num = abs(num);

	// Find factors
	printf("\nFactors of %d are:\n", num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}