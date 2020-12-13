#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i=1; i<=9; i++) {
		if (a > b) {
			for (int j=a; j>=b; j--) {
				printf("%d * %d = %2d   ", j, i, (j * i));
			}
		} else {
			for (int j=a; j<=b; j++) {
				printf("%d * %d = %2d   ", j, i, (j * i));
			}
		}
		puts("");
	}

	return 0;
}
