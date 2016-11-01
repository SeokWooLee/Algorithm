#include <stdio.h>

int main(void)
{
	unsigned int a, b, c;
	int i;
	int arr[10];
	scanf("%u%u%u",&a,&b,&c);

	a*=b*c;
	for(i=0;i<10;i++)
		arr[i]=0;
	while(a)
	{
		arr[a%10]++;
		a/=10;
	}
	for(i=0;i<10;i++)
		printf("%d\n",arr[i]);
	return 0;
}
