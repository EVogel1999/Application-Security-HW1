#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int overflow(char *buff) {
    	char local[300];

    	strcpy(local, buff);

    	return 0;
}

int main(int argc, char **argv) {
    	overflow(argv[1]);
	printf("\nDone!\n");
    	return 0;
}
