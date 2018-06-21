#include <stdio.h>

#define ASCII_A 65

int main(void) {
	int n;

	scanf("%d", &n);
	
	int count = ASCII_A;

	for (int i=0; i<n; i++) {
		for (int j=0; j<(n-i); j++, count++) {
			printf("%c", count);
		}
		puts("");
	}

	return 0;
}
