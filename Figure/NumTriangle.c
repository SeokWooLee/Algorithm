#include <stdio.h>

void FirstPrint(int);
void SecondPrint(int);
void ThirdPrint(int);

int main(void)
{
	int n, m;
	scanf("%d%d",&n,&m);
	if(n<1 || n>100 || !(n%2) || m<1 || m>3)
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
}

void FirstPrint(int n)
{
	int count=1;
	int i, j;
	for(i=0;i<n;i++)
	{
		if(i%2)
		{
			count+=i;
			for(j=0;j<=i;j++)
				printf("%d ",count--);
			count+=i+2;
			puts("");
		}
		else
		{
			for(j=0;j<=i;j++)
				printf("%d ",count++);
			puts("");
		}
	}
}

void SecondPrint(int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i;j++)
			printf(" ");
		for(j=0;j<2*(n-i)-1;j++)
			printf("%d ",i);
		puts("");
	}
}

void ThirdPrint(int n)
{
	int i, j;
	int len = (n+1)/2;
	for(i=0;i<len;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",j+1);
		puts("");
	}
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
			printf("%d ",j+1);
		puts(" ");
	}
}
