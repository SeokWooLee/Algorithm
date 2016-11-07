#include <stdio.h>

int main(void)
{
	int n;
	int arr[99][99];
	int x=0, y=0;
	int count=1;
	int len;
	scanf("%d",&n);
	len = n*n;
	x=0; y=n/2;

	while(count<=len)
	{
		arr[x][y] = count;
		if(!(count%n))
			x++;
		else
		{
			x--;y--;
			if(x<0)
				x=n-1;
			if(y<0)
				y=n-1;
		}
		count++;
	}

	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
			printf("%d ",arr[x][y]);
		puts("");
	}
	return 0;
}
