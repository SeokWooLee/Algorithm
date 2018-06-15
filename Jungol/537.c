#include <stdio.h>

int main(void) {
	int a;

	scanf("%d", &a);

	int sum = 0, index = 1;
	while (index <= a) {
		sum += index++;
	}

	printf("%d\n", sum);

	return 0;
}
