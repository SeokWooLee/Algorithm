#include <stdio.h>

#define MAX_NUMBER 100

int main(void) {
	int input;

	scanf("%d", &input);

	int sum = 0;
	for (int i=input; i<=MAX_NUMBER; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
