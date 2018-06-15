#include <stdio.h>

int main(void) {
	int a;
	
	while(1) {
		printf("number? ");
		scanf("%d", &a);

		if (a > 0) {
			printf("positive integer\n");
		} else if (a < 0) {
			printf("negative number\n");
		} else {
			break;
		}
	}

	return 0;
}
