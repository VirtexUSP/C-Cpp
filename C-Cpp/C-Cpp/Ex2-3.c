#include <stdio.h>

void print(int *i, double *j) {
	if (*i <= 10) {
		printf("%d____\t%.0lf_______\t%d______________\t%s____________\t%s\n", *i, *j, *i % 2, (*i % 2 == 0) ? "YES" : "NO", (*i < 100) ? "YES" : "NO");
	}

	else {
		printf("%d____\t%.4E___\t%d______________\t%s____________\t%s\n", *i, *j, *i % 2, (*i % 2 == 0) ? "YES" : "NO", (*i < 100) ? "YES" : "NO");
	}
}

int main(int argc, char *argv[]) {
	int i = 0;
	double j = 1;

	printf("i______\tj______________\tMOD(i, 2)______\tMOD(i, 2) = 0__\ti < 100\n\n");
	print(&i, &j);

	do {
		++i;

		if (i % 2 == 0) {
			j *= i;
			print(&i, &j);
		}

		else {
			j *= -i;
			print(&i, &j);
		}
	} while (i < 100);

	printf("\n%.4E\n", j);

	getchar();
	return 0;
}