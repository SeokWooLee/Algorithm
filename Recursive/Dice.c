#include <stdio.h>

int dice[] = {1, 2, 3, 4, 5, 6};
int flag[] = {0, 0, 0, 0, 0, 0};
int countDice=0;

void PrintDice(int, int);

int main(void)
{
	int n;
	scanf("%d",&n);
	PrintDice(n,0);
	printf("count Dice : %d\n",countDice);
	return 0;
}

void PrintDice(int n, int depth)
{
	int i, j;
	int count=0;
	if(n==depth)
	{
		printf("{");
		for(i=0;i<6;i++)
		{
			for(j=0;j<flag[i];j++)
			{
				printf("%d,",dice[i]);
				count++;
			}
		}
		if(count)
			printf("\b");
		puts("}");
		countDice++;
		return;
	}
	for(i=0;i<6;i++)
	{
		flag[i]++;
		PrintDice(n,depth+1);
		flag[i]--;
	}
}
