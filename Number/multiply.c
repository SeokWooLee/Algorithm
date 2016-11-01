#include <stdio.h>

int main(void)
{
	int a, b;
	int i;

	scanf("%d%d",&a,&b);

	printf("%d\n%d\n%d\n%d\n",a*(b%10),a*((b%100)/10),a*(b/100),a*b);
	
	return 0;
}
