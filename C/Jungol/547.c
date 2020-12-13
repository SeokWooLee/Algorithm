#include <stdio.h>

int main(void) {
	for (int i=0; i<5; i++) {
		for (int j=i+2; j<i+7; j++) {
			printf("%d ", j);
		}
		puts("");
	}
	return 0;
}
