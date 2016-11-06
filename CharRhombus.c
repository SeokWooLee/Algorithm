#include <stdio.h>

int main(void)
{
	int n;
	int i,j;
	int len;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		len = 2*i+1;
		for(j=0;j<len;j++)
			printf("A ");
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		len = 2*i+1;
		for(j=0;j<len;j++)
			printf("A ");
		printf("\n");
	}
	return 0;
}
