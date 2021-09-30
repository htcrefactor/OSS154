#include <stdio.h>

/* Lab 08 - RESET */

int main() {
	int a;
	fscanf(stdin, "%d", &a);
	fprintf(stdout, "Hello %d\n", a);
	fprintf(stderr, "Hello ERROR\n");

	return 0;
}

