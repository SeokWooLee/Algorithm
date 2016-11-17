#include <stdio.h>

int dice[6] = {1, 2, 3, 4, 5, 6};
int flag[7] = {0, 0, 0, 0, 0, 0, 0};

void PrintDice(int, int);

int m;

int main(void)
{
	int n;
	scanf("%d%d",&n,&m);
	PrintDice(n,0);
	return 0;
}

void PrintDice(int n, int depth)
{
	int i;
	int sum=0;
	if(n==depth)
	{
		for(i=0;i<n;i++)
			sum+=flag[i];
		if(sum==m)
		{
			for(i=0;i<n;i++)
				printf("%d ",flag[i]);
			puts("");
		}
		return;
	}
	for(i=1; i<7; i++)
	{
		flag[depth]=i;
		PrintDice(n, depth+1);
	}
}
