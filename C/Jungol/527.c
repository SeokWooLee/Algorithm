#include <stdio.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);

	printf("%d %.2f\n", (a / b), ((float)a / b));

	return 0;
}
