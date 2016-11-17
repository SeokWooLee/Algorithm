#include <stdio.h>

int main(void)
{
	unsigned long long n;
	unsigned long long sum;
	scanf("%llu",&n);
	sum=n;
	if(!(sum/10))
		printf("%llu\n",sum);
	while(sum/10)
	{
		sum=0;
		while(n)
		{
			sum+=n%10;
			n/=10;
		}
		printf("%llu\n",sum);
		n=sum;
	}
	return 0;
}
