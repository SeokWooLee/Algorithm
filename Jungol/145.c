#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		for (int j=i; j<(n-1); j++) {
			printf("  ");
		}

		for (int j=0; j<=i;) {
			printf("%d ", ++j);
		}
		puts("");
	}
	return 0;
}
