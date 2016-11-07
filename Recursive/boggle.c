#include <stdio.h>

int main(void)
{
	char arr[5][5] = {"URLPM","XPRET","GIAET","XTNZY","XOQRS"};
	char word[3][10] = {"PRETTY","GIRL","REPEAT"};
	int i, j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%c ",arr[i][j]);
		puts("");
	}
	return 0;
}
