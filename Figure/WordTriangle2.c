#include <stdio.h>

int main(void)
{
	char arr[100][100];
	int n;
	int i, j;
	int x, y;
	int cri;
	int count=0;
	scanf("%d",&n);
	if(!(n%2) || n<1 || n>100)
		printf("INPUT ERROR\n");
	else
	{
		cri=n/2;
		for(i=0;i<(n+1)/2;i++)
		{
			x=cri;y=cri;
			for(j=0;j<2*i+1;j++)
			{
				arr[x][y]=count+65;
				count++;
				count%=26;
				x++;
			}
			cri--;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%c ",arr[i][j]);
			puts("");
		}
	}
	return 0;
}
