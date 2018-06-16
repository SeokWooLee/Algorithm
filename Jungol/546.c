#include <stdio.h>

#define PASS_LIMIT 80

int main(void) {
	int count;

	scanf("%d", &count);

	int sum = 0;

	for (int i=0; i<count; i++) {
		int score;
		
		scanf("%d", &score);
		
		sum += score;
	}

	float avg = ((float)sum / count);

	printf("avg : %.1f\n", avg);

	if (avg >= PASS_LIMIT) {
		printf("pass\n");
	} else {
		printf("fail\n");
	}
	
	return 0;
}
