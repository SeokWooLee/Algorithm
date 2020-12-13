#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int sum = a + b + c;
	int avg = sum / 3;
	printf("sum : %d\navg : %d\n", sum, avg);

	return 0;
}
