#include <stdio.h>

void FirstPrint(int);
void SecondPrint(int);
void ThirdPrint(int);

int main(void)
{
	int n, m;
	scanf("%d%d",&n,&m);
	if( (n<1 || n>100) || (m<1 || m>3))
		printf("INPUT ERROR!\n");
	else
	{
		switch(m)
		{
			case 1:
				FirstPrint(n);
				break;
			case 2:
				SecondPrint(n);
				break;
			case 3:
				ThirdPrint(n);
				break;
		}
	}
	return 0;
}

void FirstPrint(int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("*");
		puts("");
	}
}

void SecondPrint(int n)
{
	int i, j;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
			printf("*");
		puts("");
	}
}

void ThirdPrint(int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<2*i+1;j++)
			printf("*");
		puts("");
	}
}
