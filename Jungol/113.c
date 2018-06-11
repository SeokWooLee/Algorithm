#include <stdio.h>

int main(void) {
	int width, length;

	scanf("%d %d", &width, &length);

	width += 5;
	length *= 2;

	printf("width = %d\nlength = %d\narea = %d\n", width, length, width * length);

	return 0;
}
