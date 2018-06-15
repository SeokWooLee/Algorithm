#include <stdio.h>

int main(void) {
	int a = 5;
	a += 10;
	a = a - 1;
	printf("%d\n", (++a));	//	6: a = a - 1 ( value : a )
	
	return 0;
}
