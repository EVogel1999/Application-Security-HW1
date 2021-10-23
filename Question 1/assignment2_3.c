#include <stdio.h>
#include <stdlib.h>

void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int *c[rows][cols]);
void printMatrix(int rows, int cols, int array[rows][cols]);
void createMatrix(int rows, int cols, int *array[rows][cols]);
int generateNum();

int main() {
	// Setup random number generator
	time_t t;
   	srand((unsigned) time(&t));

	// Get inputs from user
	int n, m;
	printf("Input integers n &  m on the same line\n");
	printf("Ex. 1 2\n");
	int check = scanf("%d %d", &n, &m);
	if (check != 2 || n <= 0 || m <= 0) {
		printf("Incorrect input");
		return 0;
	}

	// Create the matrices
	int a[n][m];
	int b[n][m];
	createMatrix(n, m, &a);
	createMatrix(n, m, &b);

	// Add matrices
	int c[n][m];
	addMatrix(n, m, a, b, &c);

	// Print matrices
	printf("a:\n");
	printMatrix(n, m, a);
	printf("b:\n");
	printMatrix(n, m, b);
	printf("result:\n");
	printMatrix(n, m, c);
	return 0;
}

void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int *c[rows][cols]) {
	int i, j;

  	for (i=0; i<rows; i++) {
    		for (j=0; j<cols; j++) {
			c[i][j] = a[i][j] + b[i][j];
    		}
  	}
}

void printMatrix(int rows, int cols, int array[rows][cols]) {
  	int i, j;

  	for (i=0; i<rows; i++) {
    		for (j=0; j<cols; j++) {
      			printf("%d ", array[i][j]);
    		}
		printf("\n");
  	}
	printf("\n");
}

void createMatrix(int rows, int cols, int *array[rows][cols]) {
  	int i, j;

  	for (i=0; i<rows; i++) {
    		for (j=0; j<cols; j++) {
      			array[i][j] = generateNum();
    		}
  	}
}

int generateNum() {
	return rand() % 100;
}
