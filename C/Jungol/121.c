#include <stdio.h>

int main(void) {
	int a;

	scanf("%d", &a);
	
	if (a == 0) {
		printf("zero\n");
	} else if (a > 0) {
		printf("plus\n");
	} else {
		printf("minus\n");
	}


	return 0;
}
