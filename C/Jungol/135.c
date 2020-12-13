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

	int sum = 0;
	int count = 0;

	for (; min<=max; min++) {
		if (!(min % 3) || !(min % 5)) {
			sum += min;
			count++;
		}
	}

	printf("sum : %d\navg : %.1f\n", sum, ((float)sum / count));

	return 0;
}
