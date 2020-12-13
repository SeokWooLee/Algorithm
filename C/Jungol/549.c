#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int sum = 0;
	int count = 0;

	for (int i=1; sum<n; i+=2) {
		sum += i;
		count++;
	}

	printf("%d %d\n", count, sum);

	return 0;
}
