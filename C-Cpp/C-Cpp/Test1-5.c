#include <stdio.h>

void print(double *A, double *D, double *HAP) {
	printf("%.0lf_____\t%.5lf\t%.5lf\t%s\n", *A, *D, *HAP, (*A <= 10) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	double A = 1, D = 1 / A, HAP = 1;

	printf("A______\tD______\tHAP____\tA <= 10\n\n");
	print(&A, &D, &HAP);

	do {
		D = 1 / A;
		HAP += D;
		print(&A, &D, &HAP);
		++A;
	} while (A <= 10);

	printf("\n%.5lf\n", HAP);

	getchar();
	return 0;
}