#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	bool isEqual = (a == b);
	printf("%d\n%d\n", isEqual, !(isEqual));

	return 0;
}
