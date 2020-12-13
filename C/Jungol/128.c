#include <stdio.h>

int main(void) {
	int count = 0;

	while(1) {
		int input;

		scanf("%d", &input);

		if (input == 0) {
			break;
		}

		if ((input % 3) && (input % 5)) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
