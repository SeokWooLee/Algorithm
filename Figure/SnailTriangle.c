#include <stdio.h>

int main(void)
{
	int n;
	int arr[100][100];
	int i, j;
	int cri=0;
	int x=0, y=0;
	int count=0;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		if(cri==0)
		{
			for(j=0;j<i;j++)
			{
				arr[x][y]=count++;
				x++;y++;
				count %= 10;
			}
			cri++;
			continue;
		}
		else if(cri==1)
		{
			x--;y--;
			for(j=0;j<i;j++)
			{
				y--;
				arr[x][y]=count++;
				count %= 10;
			}
			cri++;
			continue;
		}
		else
		{
			for(j=0;j<i;j++)
			{
				x--;
				arr[x][y]=count++;
				count %= 10;
			}
			cri=0;
			x++;y++;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
			printf("%d ",arr[i-1][j]);
		puts("");
	}
	return 0;
}
