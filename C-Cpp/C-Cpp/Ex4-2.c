#include <stdio.h>

void print(int *i, int *j, int *k) {
	printf("%d_____\t%d____\t%d___\t%s\n", *i, *j, *k, (*i < 20) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = 0, j = 0, k = 0;

	printf("i______\tj______\tk______\ti < 19\n\n");
	print(&i, &j, &k);

	do {
		++i;
		j += i;
		k += j;
		print(&i, &j, &k);
	} while (i < 20);

	printf("\n%d\n", k);

	getchar();
	return 0;
}