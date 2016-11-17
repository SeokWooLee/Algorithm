#include <stdio.h>

int Euclidean(int, int);

int main(void)
{
	int a, b;
	scanf("%d%d",&a,&b);
	int GCD = Euclidean(a,b);
	printf("%d\n%d\n",GCD,GCD*(a/GCD)*(b/GCD));
	return 0;
}

int Euclidean(int a, int b)
{
	int max, min;
	int temp, temp2;
	int GCD;
	if(a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	GCD = min;
	while(1)
	{
		temp = max;
		temp2 = min * (max/min);
		max = min;
		min = temp - temp2;
		if(min)
			GCD = min;
		else
			break;
	}
	return GCD;
}
