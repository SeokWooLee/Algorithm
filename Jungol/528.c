#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	printf("%d\n", a);
	if (a < 0) {
		printf("minus\n");
	}

	return 0;
}
