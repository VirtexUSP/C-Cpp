#include <stdio.h>

void print(int *i, int *j) {
	printf("%d_____\t%d____\t%s\n", *i, *j, (*i < 99) ? "<" : ">=");
}

void add(int *i, int *j) {
	++*i;
	*j += *i;
	print(i, j);
}

void subtract(int *i, int *j) {
	++*i;
	*j -= *i;
	print(i, j);
}

int main(int argc, char *argv[]) {
	int i = 0, j = 0;

	printf("i______\tj______\ti : 99\n\n");
	print(&i, &j);

	add(&i, &j);

	while (i < 99) {
		subtract(&i, &j);
		add(&i, &j);
	}

	printf("\n%d\n", j);

	getchar();
	return 0;
}