#include <stdio.h>
#include <stdbool.h>

int main() {
	// Read from file
	FILE *file;
	int buff[300];
	file = fopen("a2_1.txt", "r");
	bool flag = false;
	int i;
	for (i = 0; !flag; i++) {
		// Exit if we reach the end of the file
		int check = fscanf(file, "%d", &buff[i]);
		if (check != 1) {
			flag = true;
		}
	}

	// Print the array in reverse and close
	for (int j = i - 2; j >= 0; j--) {
		printf("%d ", buff[j]);
	}	
	
	fclose(file);
	return 0;
}
