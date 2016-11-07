#include <stdio.h>

int main(void)
{
	int s, e;
	int i;
	scanf("%d%d",&s,&e);
	while(s<2 || s>9 || e<2 || e>9)
	{
		printf("INPUT ERROR!\n");
		scanf("%d%d",&s,&e);
	}
	if(s>e)
	{
		while(s>=e)
		{
			for(i=1;i<=9;i++)
			{
				printf("%d * %d = %2d   ",s,i,s*i);
				if(!(i%3))
					puts("");
			}
			s--;
			puts("");
		}
	}
	else
	{
		while(s<=e)
		{
			for(i=1;i<=9;i++)
			{
				printf("%d * %d = %2d   ",s,i,s*i);
				if(!(i%3))
					puts("");
			}
			s++;
			puts("");
		}
	}
	return 0;
}
