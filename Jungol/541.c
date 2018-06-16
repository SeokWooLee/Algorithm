#include <stdio.h>

int main(void) {
	char input;

	scanf("%c", &input);

	for (int i=0; i<20; i++) {
		printf("%c", input);
	}

	puts("");

	return 0;
}
