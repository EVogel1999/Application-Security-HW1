#include <stdio.h>
#include <stdbool.h>

int main() {
	// Read from file
	FILE *file;
	int buff[300];
	file = fopen("a2_2.txt", "r");
	bool flag = false;
	int i;
	for (i = 0; !flag; i++) {
		// Exit if we reach the end of the file
		int check = fscanf(file, "%d", &buff[i]);
		if (check != 1) {
			flag = true;
		}
	}

	// Print out those that are less then their neighbors
	for (int j = 1; j < i - 2; j++) {
		if (buff[j-1] > buff[j] && buff[j+1] > buff[j]) {
			printf("%d ", buff[j]);
		}
	}
	return 0;
}
