#include <stdio.h>

void print(int *i, int *j) {
	printf("%d____\t%d___\t%s\n", *i, *j, (*i < 100) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = 0, j = 0;

	printf("i______\tj______\ti < 100\n\n");
	print(&i, &j);

	do {
		++i;
		j += i;

		print(&i, &j);
	} while (i < 100);

	printf("\n%d, %d\n", i, j);

	getchar();
	return 0;
}