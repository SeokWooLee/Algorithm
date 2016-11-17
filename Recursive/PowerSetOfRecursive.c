#include <stdio.h>
#include <stdlib.h>

void PowerSet(int, int);

int *arr;

int main(void)
{
	int n;
	int i;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	PowerSet(n, 0);
	return 0;
}

void PowerSet(int n, int depth)
{
	int i;
	int count=0;
	if(n==depth)
	{
		printf("{");
		for(i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				printf("%d,",i+1);
				count++;
			}
		}
		if(count)
			printf("\b");
		puts("}");
		return;
	}
	arr[depth]=1;
	PowerSet(n,depth+1);
	arr[depth]=0;
	PowerSet(n,depth+1);	
}
