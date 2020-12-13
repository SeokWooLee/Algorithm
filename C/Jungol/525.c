#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	bool firstValueIsTheBiggest = ((a > b) && (a > c));
	bool isEqualAllValues = ((a == b) && (b == c));

	printf("%d %d\n", firstValueIsTheBiggest, isEqualAllValues);

	return 0;
}
