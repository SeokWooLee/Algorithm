#include <stdio.h>

int recursiveSum(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",recursiveSum(n));
	return 0;
}

int recursiveSum(int n)
{
	if(n == 1) return 1;
	return n + recursiveSum(n-1);
}
