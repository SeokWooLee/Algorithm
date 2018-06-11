#include <stdio.h>

typedef struct {
	int height;
	int weight;
} BodyMass;

BodyMass initializeBodyMass(void);

int main(void) {
	BodyMass minSoo = initializeBodyMass();
	BodyMass kiYoung = initializeBodyMass();

	printf("%d\n", ((minSoo.height > kiYoung.height) && (minSoo.weight > kiYoung.weight)));
	
	return 0;
}

BodyMass initializeBodyMass(void) {
	BodyMass bodyMass; 
	scanf("%d %d", &bodyMass.height, &bodyMass.weight);

	return bodyMass;
}
