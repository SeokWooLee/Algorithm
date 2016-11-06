#include <stdio.h>

void FirstPrint(int);
void SecondPrint(int);
void ThirdPrint(int);
void FourthPrint(int);

int main(void)
{
	int n, m;
	scanf("%d%d",&n,&m);
	if( (n<1 || n>100) || (m<1 || m>4) || !(n%2))
		printf("INPUT ERROR!\n");
	else
	{
		n = n/2+1;
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
			case 4:
				FourthPrint(n);
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
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
			printf("*");
		puts("");
	}
}

void SecondPrint(int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("*");
		puts("");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<i;j++)
			printf("*");
		puts("");
	}
}

void ThirdPrint(int n)
{
	int i, j;
	for(i=n;i>0;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<i*2-1;j++)
			printf("*");
		puts("");
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<i*2+1;j++)
			printf("*");
		puts("");
	}
}

void FourthPrint(int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<n-i;j++)
			printf("*");
		puts("");
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
			printf(" ");
		for(j=0;j<i+1;j++)
			printf("*");
		puts("");
	}
}
