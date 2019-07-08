#include <stdio.h>

void print(double *k, double *s, int *sw) {
	printf("%.0lf_____\t%.2lf__\t%d______\t%s\n", *k, *s, *sw, (*k < 49) ? "YES" : "NO");
}

int main(int argc, char*argv[]) {
	double k = 0, s = 0;
	int sw = 0;

	printf("k______\ts______\tsw_____\tk < 49\n\n");
	print(&k, &s, &sw);

	do {
		++k;

		if (sw == 0) {
			s += k / (k + 1);
			print(&k, &s, &sw);
			sw = 1;
		}

		else {
			s -= k / (k + 1);
			print(&k, &s, &sw);
			sw = 0;
		}

	} while (k < 49);

	printf("\n%.2lf\n", k);

	getchar();
	return 0;
}