#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int number = 1;
	char character = 'A';

	for (int i=0; i<n; i++) {
		for (int j=0; j<(n-i); j++) {
			printf("%d ", number++);
		}

		for (int j=0; j<=i; j++) {
			printf("%c ", character++);
		}

		puts("");
	}

	return 0;
}
