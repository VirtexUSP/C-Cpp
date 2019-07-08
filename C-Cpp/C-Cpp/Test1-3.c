#include <stdio.h>

void print(int *A, int *B, int *H, int *T) {
	printf("%d_____\t%d_____\t%d_____\t%d_____\t%s\n", *A, *B, *H, *T, (*H < 34) ? "<" : ">=");
}

int main(int argc, char *argv[]) {
	int A = 1, B = 1, T = A + B, H = A + B;

	printf("A______\tB______\tH______\tT______\tH : 34\n\n");
	print(&A, &B, &H, &T);

	do {
		H = A + B;
		T = T + H;
		A = B;
		B = H;
		print(&A, &B, &H, &T);
	} while (H < 34);
	
	printf("\n%d\n", T);

	getchar();
	return 0;
}