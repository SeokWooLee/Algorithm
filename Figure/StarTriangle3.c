#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int cri;
	scanf("%d",&n);
	if(!(n%2) || n>100 || n<1)
		printf("INPUT ERROR!\n");
	else
	{
		cri = (n+1)/2;
		for(i=0;i<cri;i++)
		{
			for(j=0;j<i;j++)
				printf(" ");
			for(j=0;j<i*2+1;j++)
				printf("*");
			puts("");
		}
		for(i=cri-1;i>0;i--)
		{
			for(j=0;j<i-1;j++)
				printf(" ");
			for(j=0;j<i*2-1;j++)
				printf("*");
			puts("");
		}
	}
	return 0;
}
