#include <stdio.h>

void print(int *i, int *j, int *k) {
	printf("%d_____\t%d\t%d\t%s\n", *i, *j, *k, (*i < 10) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = 1, j = 1, k = 1;

	printf("i______\tj______\tk______\ti < 10\n\n");
	print(&i, &j, &k);

	do {
		++i;
		j *= i;
		k += j;
		print(&i, &j, &k);
	} while (i < 10);

	printf("\n%d\n", k);

	getchar();
	return 0;
}