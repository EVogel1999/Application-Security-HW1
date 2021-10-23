#include <stdio.h>
#include <math.h>

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

	// Calculate the sqrt
	float quad_sqrt = (powf(b, 2) - (4*a*c));
	if (quad_sqrt < 0) {
		printf("The roots are imaginary numbers\n");
		return 0;
	}

	float x1 = ((-b + sqrt(quad_sqrt)) / (2*a));
	float x2 = ((-b - sqrt(quad_sqrt)) / (2*a));

	printf("\nThe roots are %f and %f\n", x1, x2);

	return 0;
}