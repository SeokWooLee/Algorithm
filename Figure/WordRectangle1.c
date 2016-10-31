#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int count;
	scanf("%d",&n);

	count = n*n-1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",(count%26)+65);
			count-=n;
		}
		count+=n*n-1;
		puts("");
	}
	return 0;
}
