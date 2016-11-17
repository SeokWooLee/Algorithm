#include <stdio.h>

int dice[6] = {1, 2, 3, 4, 5, 6};
int flag[5] = {0, 0, 0, 0, 0};

void PrintOne(int, int);
void PrintTwo(int, int, int);
void PrintThree(int, int);

int main(void)
{
	int n, m;
	scanf("%d%d",&n,&m);
	switch(m)
	{
		case 1:
			PrintOne(n,0);
			break;
		case 2:
			PrintTwo(n,0,1);
			break;
		case 3:
			PrintThree(n,0);
			break;
	}
	return 0;
}

void PrintOne(int n, int depth)
{
	int i;
	if(n==depth)
	{
		for(i=0;i<n;i++)
			printf("%d ",flag[i]);
		puts("");
		return;
	}
	for(i=1;i<7;i++)
	{
		flag[depth]=i;
		PrintOne(n,depth+1);
	}
}

void PrintTwo(int n, int depth, int start)
{
	int i;
	if(n==depth)
	{
		for(i=0;i<n;i++)
			printf("%d ",flag[i]);
		puts("");
		return;
	}
	for(i=start;i<7;i++)
	{
		flag[depth]=i;
		PrintTwo(n,depth+1,start);
		start++;
	}
}

void PrintThree(int n, int depth)
{
	int i, j;
	int conti;
	if(n==depth)
	{
		for(i=0;i<n;i++)
			printf("%d ",flag[i]);
		puts("");
		return;
	}
	for(i=1;i<7;i++)
	{
		conti=0;
		for(j=0;j<depth;j++)
		{
			if(flag[j]==i)
			{
				conti=1;
				break;
			}
		}
		if(conti)
			continue;
		flag[depth]=i;
		PrintThree(n,depth+1);
	}
}
