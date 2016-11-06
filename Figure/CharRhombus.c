#include <stdio.h>

int main(void)
{
	int n;
	int i,j;
	int len;
	int a=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		len = 2*i+1;
		for(j=0;j<2*n-2-i*2;j++)
			printf(" ");
		for(j=0;j<len;j++)
		{
			printf("%c ",a%26+65);
		}
		a++;
		a=a%26;
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		len = 2*i+1;
		for(j=0;j<2*n-2-i*2;j++)
			printf(" ");
		for(j=0;j<len;j++)
		{
			printf("%c ",a+65);
		}
		a++;
		a=a%26;
		printf("\n");
	}
	return 0;
}
