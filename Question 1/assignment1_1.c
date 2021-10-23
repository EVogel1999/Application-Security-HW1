#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter a, b, and c (integers) on one line");
	printf("\nExample: 10 20 30\n");
	int check = scanf("%d %d %d", &a, &b, &c);
	
	// Check if values are good
	if (check != 3) {
		printf("Incorrect input\n");
		return 0;
	}
	if (a == 0) {
		printf("a cannot be 0\n");
		return 0;
	}

	float x = ((c - b) / a);
	printf("\nThe root (x) is %f\n", x);

	return 0;
}