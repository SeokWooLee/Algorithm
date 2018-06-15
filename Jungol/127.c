#include <stdio.h>

int main(void) {
	int sum = 0;
	int count = 0;

	while (1) {
		int input;

		scanf("%d", &input);

		if ((input < 0) || (input > 100)) {
			break;
		}

		sum += input;
		count++;
	}

	printf("sum : %d\navg : %.1f\n", sum, ((float)sum / count));

	return 0;
}
