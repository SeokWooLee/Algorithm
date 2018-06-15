#include <stdio.h>

int min(int, int);

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d\n", min(min(a, b), c));

	return 0;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}
