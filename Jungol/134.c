#include <stdio.h>

int main(void) {
	int evenCount = 0;
	int oddCount = 0;

	for (int i=0; i<10; i++) {
		int input;

		scanf("%d", &input);

		(input % 2) ? oddCount++ : evenCount++;
	}

	printf("even : %d\nodd : %d\n", evenCount, oddCount);

	return 0;
}
