#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int count;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		count=i;
		for(j=0;j<n;j++)
		{
			printf("%c ",count%26+65);
			if(j%2)
				count+=i*2+1;
			else
				count+=(n-i)+(n-i-1);
		}
		puts("");
	}
	return 0;
}
