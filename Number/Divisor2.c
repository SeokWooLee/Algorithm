#include <stdio.h>

int arr[10000];

int main(void)
{
	unsigned long long n;
	int i, len;
	int count=0;
	int max=0;
	scanf("%llu",&n);
	
	len = n;
	if(n==1)
	{
		printf("%d\n",1);
		return 0;
	}
	for(i=1;i<len;i++)
	{
		if(!(n%i))
		{
			arr[count++]=i;
			len = n/i;
			arr[count++]=len;
			max = count; 
		}
	}
	for(i=0;i<max;i+=2)
		printf("%d ",arr[i]);
	for(i=max-1;i>0;i-=2)
	{
		if(arr[i]!=arr[i-1])
			printf("%d ",arr[i]);
	}

	return 0;
}
