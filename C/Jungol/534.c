#include <stdio.h>

#define A "Excellent"
#define B "Good"
#define C "Usually"
#define D "Effort"
#define F "Failure"
#define Error "error"

int main(void) {
	char score;

	scanf("%c", &score);

	if (score == 'A') {
		printf("%s\n", A);
	} else if (score == 'B') {
		printf("%s\n", B);
	} else if (score == 'C') {
		printf("%s\n", C);
	} else if (score == 'D') {
		printf("%s\n", D);
	} else if (score == 'F') {
		printf("%s\n", F);
	} else {
		printf("%s\n", Error);
	}

	return 0;
}
