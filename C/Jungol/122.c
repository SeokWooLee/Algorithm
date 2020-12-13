#include <stdio.h>

int main(void) {
	int year;

	scanf("%d", &year);

	if (!(year % 400) || (!(year % 4) && (year % 100))) {
		printf("leap year\n");
	} else {
		printf("common year\n");
	}

	return 0;
}
