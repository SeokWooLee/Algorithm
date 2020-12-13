#include <stdio.h>

int main(void) {
	int oddCount = 0;
	int evenCount = 0;

	while (1) {
		int input;

		scanf("%d", &input);

		if (input == 0) {
			break;
		}

		(input % 2) ? oddCount++ : evenCount++;
	}

	printf("odd : %d\neven : %d\n", oddCount, evenCount);

	return 0;
}
