#include <stdio.h>

int main() {
	int a, b, c;
	fscanf(stdin, "%d", &a);
	fscanf(stdin, "%d", &b);
	fscanf(stdin, "%d", &c);
	fprintf(stdout, "Hello World: %d\n", a);
	fprintf(stderr, "Hello Error: %d\n", b);
	fprintf(stderr, "Hello Error: %d\n", c);

	return (a);
}

