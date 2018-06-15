#include <stdio.h>

#define A_Score 4
#define B_Score 3
#define C_Score 2

int main(void) {
	float score;

	scanf("%f", &score);

	switch ((int)score) {
		case A_Score:
			printf("scholarship\n");
			break;
		case B_Score:
			printf("next semester\n");
			break;
		case C_Score:
			printf("seasonal semester\n");
			break;
		default:
			printf("retake\n");
			break;
	}

	return 0;
}
