#include <stdio.h>

void FuncOne(int, int);
void FuncTwo(int, int);
void FuncThree(int, int);

int main(void)
{
	int n, m;
	int i, j;
	int count=1;
	scanf("%d%d",&n,&m);

	switch(m)
	{
		case 1:
			FuncOne(n,m);
			break;
		case 2:
			FuncTwo(n,m);
			break;
		case 3:
			FuncThree(n,m);
			break;
	}

	return 0;
}

void FuncOne(int n, int m)
{
	int i, j;
	int count=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",count);
		count++;
		puts("");
	}
}

void FuncTwo(int n, int m)
{
	int i, j;
	int count=1;
	for(i=0;i<n;i++)
	{
		if(i%2)
			count--;
		else if(i!=0)
			count++;
		for(j=0;j<n;j++)
		{
			if(i%2)
				printf("%d\t",count--);
			else
				printf("%d\t",count++);
		}
		puts("");
	}
}

void FuncThree(int n, int m)
{
	int i, j;
	int count;
	for(i=0;i<n;i++)
	{
		count=i+1;
		for(j=0;j<n;j++)
		{
			printf("%d\t",count);
			count+=i+1;
		}
		puts("");
	}
}
