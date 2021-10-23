#include <stdio.h>

// Comparision without boundary check
int intErr(short x, short y) {
	short z = x + y;
	if (z < 50) {
		return 1;	
	}
	return 0;
}

// Boundary check before comparision
int safe(short x, short y)  {
	short MAX = 32767;
	short MIN = -32768;
	if (x >= 0  && y > MAX - x) {
		printf("Integer Overflow Detected");
		return 0;
	} else if (y < MIN - x) {
		printf("Integer Overflow Detected");
		return 0;
	}
	return intErr(x, y);
}

int main() {
	short x;
	short y;
	scanf("%hd %hd", &x, &y);

	// int result = intErr(x, y);
	int result = safe(x, y);
	if (result == 1) {
		printf("\nCorrect!\n");
	} else {
		printf("\nIncorrect\n");
	}
	return 0;
}
