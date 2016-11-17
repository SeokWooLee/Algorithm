#include <stdio.h>

int main(void)
{
	int n, k;
	int i;
	int len;
	int count=0;
	scanf("%d%d",&n,&k);
	len = (n+1)/2;
	for(i=1;i<=len;i++)
	{
		if(!(n%i))
		{
			count++;
			if(count==k)
			{
				printf("%d\n",i);
				return 0;
			}
		}
	}
	if(count+1==k)
		printf("%d\n",n);
	else
		printf("0\n");
	return 0;
}
