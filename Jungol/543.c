#include <stdio.h>

int main(void) {
	int input;

	scanf("%d", &input);

	for (int i=2; i<=input; i+=2) {
		printf("%d ", i);
	}

	return 0;
}
