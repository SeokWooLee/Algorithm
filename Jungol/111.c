#include <stdio.h>

int main(void) {
	int koreanScore, englishScore, mathScore, computerScore;
	
	scanf("%d %d %d %d", &koreanScore, &englishScore, &mathScore, &computerScore);

	int sum = koreanScore + englishScore + mathScore + computerScore;
	int avg = sum / 4;
	
	printf("sum %d\navg %d\n", sum, avg);

	return 0;
}
