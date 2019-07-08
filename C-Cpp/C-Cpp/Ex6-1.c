#include <stdio.h>

void print(int *A, int *B, int *C, int *HAP, int *CNT) {
	printf("%d___\t%d___\t%d__\t%d__\t%d_____\t%s\n", *A, *B, *C, *HAP, *CNT, (*CNT < 20) ? "YES" : "NO");
}

void Initialize(int *A, int *B, int *C, int *HAP, int *CNT) {
	*C = *A + *B;
	*HAP += *C;
	++*CNT;
}

void Sequence(int *A, int *B, int *C) {
	*A = *B;
	*B = *C;
}

int main(int argc, char *argv[]) {
	int A = 1, B = 1, C, HAP = 0, CNT = 1;

	Initialize(&A, &B, &C, &HAP, &CNT);
	printf("A______\tB______\tC______\tHAP____\tCNT____\tCNT < 20\n\n");
	print(&A, &B, &C, &HAP, &CNT);

	while (CNT < 20) {
		Sequence(&A, &B, &C);
		Initialize(&A, &B, &C, &HAP, &CNT);
		print(&A, &B, &C, &HAP, &CNT);
	}

	printf("\n%d\n", HAP);

	getchar();
	return 0;
}