#include <stdio.h>

int main() {
	int a;
	fscanf(stdin, "%d", &a);
	fprintf(stdout, "Hello %d\n", a);
	fprintf(stderr, "Hello ERROR\n");

	return 0;
}

