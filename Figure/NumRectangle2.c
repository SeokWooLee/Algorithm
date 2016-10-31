#include <stdio.h>

int main(void)
{
	int n, m;
	int i, j;
	int count=1;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		if(i%2)
			count+=m-1;
		for(j=0;j<m;j++)
		{
			if(i%2)
				printf("%d\t",count--);
			else
				printf("%d\t",count++);
		}
		if(i%2)
			count+=m+1;
		puts("");
	}
}
