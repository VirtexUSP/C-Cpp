#include <stdio.h>

void print(double *i, double *j) {
	printf("%.0lf_____\t%.7lf_____\t%d_____________________\t%.1lf___\t%s____________________\t%s\n", *i, *j, (int) *i / 2, *i / 2, ((int) *i / 2 == *i / 2) ? "YES" : "NO", (*i >= 99) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	double i = 0, j = 0;

	printf("i______\tj______________\tINT(i / 2)_____________\ti / 2__\tINT(i / 2) = i / 2_____\ti >= 99\n\n");
	print(&i, &j);

	do {
		++i;

		if((int) i / 2 == i / 2) {
			j += i / (i + 1);
			print(&i, &j);
		}

		else {
			j -= i / (i + 1);
			print(&i, &j);
		}

	} while (!(i >= 99));

	printf("\n%.7lf\n", j);

	getchar();
	return 0;
}