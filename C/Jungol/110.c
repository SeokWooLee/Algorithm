#include <stdio.h>

#define YARD_TO_CM 91.44

int main(void) {
	double yard;
	printf("yard? ");
	scanf("%lf", &yard);
	printf("%.1fyard = %.1fcm\n", yard, (yard * YARD_TO_CM));

	return 0;
}
