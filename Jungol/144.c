#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	for (int i=0; i<n; i++, puts("")) {
		for (int j=0; j<(2*(n-i-1)); j++) {
			printf(" ");
		}

		for (int j=0; j<(i*2)+1; j++) {
			printf("*");
		}
	}

	return 0;
}
