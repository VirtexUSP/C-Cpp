#include <stdio.h>
#include <stdbool.h>

void print(int *i, int *j, bool *SW) {
	printf("%d____\t%d____\t%d______\t%s____\t%s\n", *i, *j, *SW, (!*SW) ? "YES" : "NO", (*i < 100) ? "YES" : "NO");
}

int main(int argc, char *argv[]) {
	int i = 0, j = 0;
	bool SW = false;
	
	printf("i______\tj______\tSW_____\tSW = 0_\ti < 100\n\n");
	print(&i, &j, &SW);

	do {
		++i;

		if (!SW) {
			j += i;
			SW = true;
		}

		else {
			j -= i;
			SW = false;
		}

		print(&i, &j, &SW);
	} while (i < 100);

	printf("\n%d\n", j);

	getchar();
	return 0;
}