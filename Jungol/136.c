#include <stdio.h>

int main(void) {
	int a;

	scanf("%d", &a);

	for (int i=1; i<=10; i++) {
		printf("%d ", (a * i));
	}

	return 0;
}
