#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int sum = 0;

	for (int i=0; i<n; i++) {
		int input;
		
		scanf("%d", &input);

		sum += input;
	}

	printf("%.2f\n", ((float)sum / n));

	return 0;
}
