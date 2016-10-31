#include <stdio.h>

int main(void)
{
	int n, m;
	int i, j;
	int count=1;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d\t",count++);
		puts("");
	}
	return 0;
}
