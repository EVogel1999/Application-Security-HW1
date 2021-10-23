#include <stdio.h>

int main() {
	// Get user input
	int num;
	printf("Input a number:");
	int check = scanf("%d", &num);
	if (check != 1) {
		printf("Incorrect input");
		return 0;
	}

	// Convert into binary
	int i;
	int binary[32]; // 32 Bit number
	for(i = 0; num > 0; i++) {
		if (num % 2 == 0) {
			binary[i] = 0;
		} else {
			binary[i] = 1;
		}
		num = num / 2;
	}

	// Print results in reverse
	for (int j = i - 1; j >= 0; j--) {
		printf("%d  ", binary[j]);	
	}

	return 0;
}
