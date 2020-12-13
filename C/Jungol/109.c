#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int sum = a + b + c;
	printf("sum = %d\navg = %d\n", sum, (sum / 3));

	return 0;
}
