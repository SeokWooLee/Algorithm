#include <stdio.h>

int main(void) {
	int row, column;

	scanf("%d %d", &row, &column);

	for (int i=1; i<=row; i++) {
		for (int j=1; j<=column; j++) {
			printf("%d ", i * j);
		}
		puts("");
	}

	return 0;
}
