#include <stdio.h>

void print(int *i, int *j) {
	printf("%d_____\t%d___\t%s\n", *i, *j, (*i < 99) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = -1, j = 0;

	printf("i______\tj______\ti < 99\n\n");
	print(&i, &j);

	do {
		i += 2;
		j += i;

		print(&i, &j);
	} while (i < 99);

	printf("\n%d\n", j);

	getchar();
	return 0;
}