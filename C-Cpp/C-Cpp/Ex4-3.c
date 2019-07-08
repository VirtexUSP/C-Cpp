#include <stdio.h>

void print(int *i, int *j, int *k, int *l) {
	printf("%d_____\t%d____\t%d_____\t%d____\t%s\n", *i, *j, *l, *k, (*i < 19) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = 0, j = 1, k = -1, l = -1;

	printf("i______\tj______\tl_____\tk______\ti < 19\n\n");
	print(&i, &j, &k, &l);

	do {
		++i;
		j += i;
		l = -l;
		k += j * l;
		print(&i, &j, &k, &l);
	} while (i < 19);

	printf("\n%d\n", k);
	
	getchar();
	return 0;
}