#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int count = 1;
	for (int i=0; i<n; i++, puts("")) {
		for (int j=0; j<n; j++, count += 2) {
			printf("%d ", (count % 10));
		}
	}

	return 0;
}
