#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
    printf("Enter n1:");
    int check1 = scanf("%d", &a);
    printf("Enter n2:");
    int check2 = scanf("%d", &b);

	if ((check1 + check2) != 2) {
		printf("Incorrect input\n");
		return 0;
	}
	if (a == 0 || b == 0) {
		printf("n1 and n2 cannot be 0\n");
		return 0;
	}
	a = abs(a);
	b = abs(b);

	// Calculate GCD
	int gcd = -1;
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}

	if (gcd == -1) {
		printf("No GCD found\n");
	} else {
		printf("GCD is %d", gcd);
	}
	return 0;
}