#include <stdio.h>

int main(void)
{
	int s, e;
	int i;
	int temp;
	scanf("%d%d",&s,&e);
	while(s<2 || s>9 || e<2 || e>9)
	{
		printf("INPUT ERROR!\n");
		scanf("%d%d",&s,&e);
	}
	if(s>e)
	{
		temp = s;
		for(i=1;i<=9;i++)
		{
			for(;s>=e;s--)
				printf("%d * %d = %2d   ",s,i,s*i);
			puts("");
			s = temp;
		}
	}
	else
	{
		temp = s;
		for(i=1;i<=9;i++)
		{
			for(;s<=e;s++)
				printf("%d * %d = %2d   ",s,i,s*i);
			puts("");
			s = temp;
		}
	}
	return 0;
}
