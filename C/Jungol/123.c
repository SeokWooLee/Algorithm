#include <stdio.h>

#define DOG 1
#define CAT 2
#define CHICK 3

int main(void) {
	int animal;
	
	printf("Number? ");
	scanf("%d", &animal);

	switch (animal) {
		case DOG:
			printf("dog\n");
			break;
		case CAT:
			printf("cat\n");
			break;
		case CHICK:
			printf("chick\n");
			break;
		default:
			printf("I don't know.\n");
			break;
	}
	

	return 0;
}
