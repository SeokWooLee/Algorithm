#include <stdio.h>
#include <stdlib.h>

int Euclidean(int, int);

int main(void)
{
	int n;
	int *arr;
	int i;
	int GCD;
	int LCM=1;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	scanf("%d",&arr[0]);
	GCD = arr[0];
	LCM = GCD;
	for(i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
		GCD = Euclidean(arr[i],GCD);
	}
	for(i=0;i<n;i++)
	{
		if(
	}
	printf("%d %d",GCD, LCM);
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
