#include <stdio.h>

void print(int *i, double *f, double *sum) {
	if (*i <= 6) {
		printf("%d_____\t%.0lf____________________\t%.0lf________________\t%s\n", *i, *f, *sum, (*i < 21) ? "YES" : "NO");
	}
	
	else if (*i <= 14) {
		printf("%d_____\t%.0lf____________\t%.0lf____________\t%s\n", *i, *f, *sum, (*i < 21) ? "YES" : "NO");
	}

	else {
		printf("%d_____\t%.0lf____\t%.0lf____\t%s\n", *i, *f, *sum, (*i < 21) ? "YES" : "NO");
	}
}

int main(int argc, char *argv[]) {
	int i = 1;
	double f = 1, sum = 0;

	printf("i______\tf______________________\tsum____________________\ti < 21\n\n");
	print(&i, &f, &sum);
	++i;

	while (i < 21) {
		f *= i;
		sum += f;
		print(&i, &f, &sum);
		++i;
	}

	printf("\n%.0lf\n", sum);

	getchar();
	return 0;
}