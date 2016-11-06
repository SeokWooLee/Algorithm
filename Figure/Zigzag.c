#include <stdio.h>

int main(void)
{
	int n;
	int i=0, j=0;
	int count=1;
	int arr[100][100];
	int len;
	int cri=1;
	int sum=0;
	scanf("%d",&n);
	len = n*n;
	for(i=1;i<=n;i++)
		sum+=i;
	i=0;
	
	while(count<=len)
	{
		if(count<=sum)
		{
			arr[i][j]=count++;
			if(cri)
			{
				if(!j)
				{
					i++;
					cri=0;
				}
				else
				{
					i++;
					j--;
				}
			}
			else
			{
				if(!i)
				{
					j++;
					cri=1;
				}
				else
				{
					i--;
					j++;
				}
			}
		}
		else
		{
			if(i==n)
			{
				i--;
				j++;
				cri=0;
				arr[i][j]=count++;
				continue;
			}
			else if(j==n)
			{
				j--;
				i++;
				cri=1;
				arr[i][j]=count++;
				continue;
			}
			if(cri)
			{
				if(i==n-1)
				{
					j++;
					cri=0;
				}
				else
				{
					i++;
					j--;
				}
			}
			else
			{
				if(j==n-1)
				{
					i++;
					cri=1;
				}
				else
				{
					i--;
					j++;
				}
			}
			arr[i][j]=count++;
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		puts("");
	}
	return 0;
}
