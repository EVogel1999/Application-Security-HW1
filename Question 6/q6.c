#include <stdio.h>
#include <string.h>

int checkStr(char *str);
void printCorrect();

int checkStr(char *str) {
	// No length checking, vulnerability here
	char c[8];
	strcpy(c, str);

	if (c[0] == 'z') {
		return 1;
	}
	return 0;
}

void printCorrect() {
	printf("Correct!");
}

int main() {
	char *input[16];
	scanf("%s", *input);
	int result = checkStr(*input);
	if (result == 1) {
		printCorrect();
	} else {
		printf("Wrong");
	}
	return 0;
}
