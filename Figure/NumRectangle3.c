#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int count=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",count);
			count+=n;
		}
		count-=n*n-1;
		puts("");
	}
	return 0;
}
