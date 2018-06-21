#include <stdio.h>

#define MAX_NUMBER 20

int main(void) {
	int sum = 0;
	int count;

	for (int i=1; i<=MAX_NUMBER; i++) {
		int input;

		scanf("%d", &input);
		
		sum += input;

		if (input == 0) {
			break;
		}

		count = i;
	}

	printf("%d %d\n", sum, (sum / count));

	return 0;
}
