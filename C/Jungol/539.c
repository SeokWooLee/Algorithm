#include <stdio.h>

int main(void) {
	int sum = 0, count = 0;

	while (1) {
		int a;

		scanf("%d", &a);

		sum += a;
		count++;

		if (a >= 100) {
			printf("%d\n%.1f\n", sum, ((float)sum / count));
			break;
		}
	}

	return 0;
}
