#include <stdio.h>

void print(int *n, int *y, int *s) {
	printf("%d____\t%d_____\t%d____\t%s\n", *n, *s, *y, (*n < 100) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int n = 0, y = 0, s = 1;

	printf("n______\ts______\ty______\tn < 100\n\n");
	print(&n, &y, &s);

	do {
		++n;
		y += s * n;
		print(&n, &y, &s);
		s = -s;
	} while (n < 100);

	printf("\n%d\n", y);

	getchar();
	return 0;
}