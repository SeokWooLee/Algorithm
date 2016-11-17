#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i;
	int *arr;
	int m;
	int sum1=0, sum2=0;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(!(m%arr[i]))
			sum1+=arr[i];
		if(!(arr[i]%m))
			sum2+=arr[i];
	}
	printf("%d\n%d\n",sum1,sum2);

	return 0;
}
