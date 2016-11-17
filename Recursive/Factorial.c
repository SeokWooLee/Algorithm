#include <stdio.h>

unsigned long long PrintFactorial(int);

int main(void)
{
	unsigned long long n;
	scanf("%llu",&n);
	printf("%llu\n",PrintFactorial(n));
	return 0;
}

unsigned long long PrintFactorial(int n)
{
	if(n==1)
	{
		printf("1! = 1\n");
		return 1;
	}
	printf("%d! = %d * %d!\n",n,n,n-1);
	return n * PrintFactorial(n-1);
}
