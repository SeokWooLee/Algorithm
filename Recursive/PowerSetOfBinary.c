#include <stdio.h>

void PowerSet(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	PowerSet(n);
	return 0;
}

void PowerSet(int n)
{
	int i, j;
	int len = 1<<n;
	int count;
	for(i=0;i<len;i++)
	{
		count=0;
		printf("{");
		for(j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				printf("%d,",j+1);
				count++;
			}
		}
		if(count)
			printf("\b");
		puts("}");
	}
}
