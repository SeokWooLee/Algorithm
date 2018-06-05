#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OCTAL_DIGIT_MAX_LENGTH 3

char *binaryStringFromOctalChar(char);

int main(void) {
	char octalDigitString[333334];
	scanf("%s", octalDigitString);

	int octalDigitStringLength = strlen(octalDigitString);

	//	At the first index, remove 0 prefix.
	char *firstBinaryString = binaryStringFromOctalChar(octalDigitString[0]);
	for (int i=0; i<OCTAL_DIGIT_MAX_LENGTH; i++) {
		if (firstBinaryString[i] != '0') {
			printf("%s", &firstBinaryString[i]);
			break;
		}
		if (i == OCTAL_DIGIT_MAX_LENGTH - 1) {
			printf("0\n");
		}
	}

	for (int i=1; i<octalDigitStringLength; i++) {
		printf("%s", binaryStringFromOctalChar(octalDigitString[i]));
	}

	return 0;
}

char *binaryStringFromOctalChar(char octalChar) {
	char *binaryString = malloc(sizeof(char) * OCTAL_DIGIT_MAX_LENGTH);
	int octalNumber = octalChar - 48;
	
	strcpy(binaryString, "000");

	for (int i=0; i<OCTAL_DIGIT_MAX_LENGTH; i++) {
		if (octalNumber == 0) {
			break;
		}

		binaryString[OCTAL_DIGIT_MAX_LENGTH-i-1] = (octalNumber % 2) + 48;

		octalNumber /= 2;
	}

	return binaryString;
}
