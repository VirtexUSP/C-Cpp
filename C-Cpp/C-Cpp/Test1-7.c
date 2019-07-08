#include <stdio.h>

void print(int *n, int *sum) {
	printf("%d_____\t%d____\t%s\n", *n, *sum, (*n >= 99) ? "YES" : "NO");
}

void add(int *n, int *sum) {
	++*n;
	*sum += *n;
	print(n, sum);
}

void subtract(int *n, int *sum) {
	++*n;
	*sum -= *n;
	print(n, sum);
}

int main(int argc, char **argv) {
	int n = 0, sum = 0;

	printf("n______\tsum____\tn >= 99\n\n");
	subtract(&n, &sum);

	while (!(n >= 99)) {
		add(&n, &sum);
		subtract(&n, &sum);
	}

	printf("\n%d\n", sum);

	getchar();
	return 0;
}