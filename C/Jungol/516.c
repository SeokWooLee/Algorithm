#include <stdio.h>

int main(void) {
	double a, b;
	char c;

	scanf("%lf %lf %c", &a, &b, &c);
	printf("%.2f\n%.2f\n%c\n", a, b, c);

	return 0;
}
