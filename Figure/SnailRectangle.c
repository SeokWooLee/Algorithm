#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int n;
	int i=0, j=0, k;
	int right, down, left, up;
	int count=1;
	int len;
	scanf("%d",&n);
	len = n*n+1;
	right = n;
	down = n-1;
	left = n-1;
	up = n-2;
	while(count<len)
	{
		for(k=0;k<right;j++,k++)
			arr[i][j]=count++;
		right-=2;
		j--;
		i++;
		for(k=0;k<down;i++,k++)
			arr[i][j]=count++;
		down-=2;
		i--;
		j--;
		for(k=0;k<left;j--,k++)
			arr[i][j]=count++;
		left-=2;
		j++;
		i--;
		for(k=0;k<up;i--,k++)
			arr[i][j]=count++;
		up-=2;
		i++;
		j++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		puts("");
	}
	return 0;
}
