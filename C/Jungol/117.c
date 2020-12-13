#include <stdio.h>

int main(void) {
	float score1, score2, score3;

	scanf("%f %f %f", &score1, &score2, &score3);

	printf("sum %d\n", ((int)score1 + (int)score2 + (int)score3));
	printf("avg %d\n", (int)((score1 + score2 + score3) / 3));

	return 0;
}
