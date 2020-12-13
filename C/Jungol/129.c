#include <stdio.h>

int main(void) {
	while (1) {
		float base, height;

		printf("Base = ");
		scanf("%f", &base);

		printf("Height = ");
		scanf("%f", &height);

		printf("Triangle width = %.1f\n", (base * height / 2));

		printf("Continue? ");

		char continueChar;
		
		scanf(" %c", &continueChar);

		switch(continueChar) {
			case 'Y':
			case 'y':
				break;
			default:
				return 0;
		}
	}
}
