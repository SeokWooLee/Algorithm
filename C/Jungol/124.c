#include <stdio.h>

#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPTEMBER 9
#define OCTOBER 10
#define NOVEMBER 11
#define DECEMBER 12

int main(void) {
	int month;

	scanf("%d", &month);

	switch(month) {
		case JANUARY:
		case MARCH:
		case MAY:
		case JULY:
		case AUGUST:
		case OCTOBER:
		case DECEMBER:
			printf("31\n");
			break;

		case FEBRUARY:
			printf("28\n");
			break;

		case APRIL:
		case JUNE:
		case SEPTEMBER:
		case NOVEMBER:
			printf("30\n");
			break;
	}
	return 0;
}
