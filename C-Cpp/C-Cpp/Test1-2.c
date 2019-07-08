#include <stdio.h>

void print(int *p, int *q, int *m, int *h) {
	printf("%d_____\t%d_____\t%d___\t%d__\t%s\n", *p, *q, *m, *h, (*p < 77) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int p = 0, q = 0, h = 0, m = 0;

	printf("p______\tq______\tm______\th______\tp < 77\n\n");
	print(&p, &q, &m, &h);

	do {
		++p;
		q = 78 - p;
		m = q * p;
		h += m;
		print(&p, &q, &m, &h);
	} while (p < 77);

	printf("\n%d\n", h);

	getchar();
	return 0;
}