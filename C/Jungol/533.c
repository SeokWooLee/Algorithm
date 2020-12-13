#include <stdio.h>
#include <stdbool.h>

#define MALE 'M'
#define FEMALE 'F'

int main(void) {
	char sex;
	int age;

	scanf("%c %d", &sex, &age);

	bool isAdult = (age >= 18);
	
	if (sex == MALE) {
		if (isAdult) {
			printf("MAN\n");
		} else {
			printf("BOY\n");
		}
	} else if (isAdult) {
		printf("WOMAN\n");
	} else {
		printf("GIRL\n");
	}

	return 0;
}
