#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	int min, max;

	if (a < b) {
		min = a;
		max = b;
	} else {
		min = b;
		max = a;
	}

	for (; min<=max; min++) {
		printf("%d ", min);
	}

	return 0;
}
