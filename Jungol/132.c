#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int sum = 0;

	for (int i=5; i<=n; i+=5) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
