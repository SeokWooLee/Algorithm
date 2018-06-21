#include <stdio.h>

int main(void) {
	int n;
	
	scanf("%d", &n);

	for (int i=n; i<100; i+=n) {
		printf("%d ", i);

		if (!(i%10)) {
			break;
		}
	}

	puts("");

	return 0;
}
