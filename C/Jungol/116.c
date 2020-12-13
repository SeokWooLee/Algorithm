#include <stdio.h>

int main(void) {
	int score1, score2, score3;

	scanf("%d %d %d", &score1, &score2, &score3);

	printf("%.1f\n", ((float)(score1 + score2 + score3) / 3));

	return 0;
}
