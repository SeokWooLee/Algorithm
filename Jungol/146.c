#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	char character = 'A';
	int number = 0;

	for (int i=0; i<n; i++, puts("")) {
		for (int j=i; j<n; j++) {
			printf("%c ", character++);
		}

		for (int j=0; j<i; j++) {
			printf("%d ", number++);	
		}
	}

	return 0;
}
