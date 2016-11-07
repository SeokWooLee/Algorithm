#include <stdio.h>

int main(void)
{
	int n;
	char arr[100][100];
	int i, j;
	int x, y;
	int count=0;
	int cri=0;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		x=cri;y=n-1;
		for(j=0;j<i;j++)
		{
			arr[x][y] = count+65;
			count++;
			count%=26;
			x++;y--;
		}
		cri++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf("  ");
		for(j=n-i-1;j<n;j++)
			printf("%c ",arr[i][j]);
		puts("");
	}
	return 0;
}
