#include <stdio.h>
#include <stdlib.h>

void print(int *k, int *a, int *b, int *c, int *y, int *n) {
	printf("%d_\t%d_\t%d_\t%d_\t%d_\t%s\n", *k, *a, *b, *c, *y, (*k <= *n) ? "YES" : "NO");
}

int main(int argc, char **argv) {
	int k = 2, a = 1, b = 1, c = 2, y = 2 , n;

	printf("피보나치 수열의 합 구하기\n\n수를 입력하세요. \n");

	while (1) {
		scanf_s("%d", &n);

		if (n >= 3) {
			printf("\nk______\ta______\tb______\tc______\ty______\tk <= %d\n\n", n);
			print(&k, &a, &b, &c, &y, &n);

			for (k = 3; k <= n; ++k) {
				c = a + b;
				y += c;
				print(&k, &a, &b, &c, &y, &n);
				a = b;
				b = c;
			}

			printf("\n%d\n", y);

			system("PAUSE > NUL");
			return 0;
		}

		else {
			printf("\n3 이상의 수를 입력하세요. \n");
		}
	}
}