#include <stdio.h>

int main(void) {
	int multiplesOfThree = 0;
	int multiplesOfFive = 0;

	for (int i=0; i<10; i++) {
		int input;
		
		scanf("%d", &input);

		if (!(input % 3)) {
			multiplesOfThree++;
		}

		if (!(input % 5)) {
			multiplesOfFive++;
		}
	}

	printf("Multiples of 3 : %d\nMultiples of 5 : %d\n", multiplesOfThree, multiplesOfFive);

	return 0;
}
