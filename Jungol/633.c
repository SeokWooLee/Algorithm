#include <stdio.h>

#define KOREA 	1
#define USA		2
#define JAPAN	3
#define CHINA	4

int main(void) {
	while(1) {
		int number;

		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
		scanf("%d", &number);

		puts("");

		switch(number) {
			case KOREA:
				printf("Seoul\n");
				break;
			case USA:
				printf("Washington\n");
				break;
			case JAPAN:
				printf("Tokyo\n");
				break;
			case CHINA:
				printf("Beijing\n");
				break;
			default:
				printf("none\n");
				return 0;
		}

		puts("");
	}
}
