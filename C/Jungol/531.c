#include <stdio.h>

#define FLY_WEIGHT_LIMIT 50.80
#define LIGHT_WEIGHT_LIMIT 61.23
#define MIDDLE_WEIGHT_LIMIT 72.57
#define CRUISER_WEIGHT_LIMIT 88.45

int main(void) {
	float weight;

	scanf("%f", &weight);

	if (weight <= FLY_WEIGHT_LIMIT) {
		printf("Flyweight\n");
	} else if (weight <= LIGHT_WEIGHT_LIMIT) {
		printf("Lightweight\n");
	} else if (weight <= MIDDLE_WEIGHT_LIMIT) {
		printf("Middleweight\n");
	} else if (weight <= CRUISER_WEIGHT_LIMIT) {
		printf("Cruiserweight\n");
	} else {
		printf("Heavyweight\n");
	}

	return 0;
}
