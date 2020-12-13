#include <stdio.h>

int main(void) {
	while(1) {
		int a;
		
		scanf("%d", &a);

		if (a == -1) {
			break;
		} else if (!(a % 3)) {
			printf("%d\n", (a / 3));
		}
	}

	return 0;
}
