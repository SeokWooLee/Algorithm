#include <stdio.h>
#include <string.h>

int main(void) {
	int ioi=0;
	int koi=0;
	char str[10001];
	int i, len;
	scanf("%s",str);
	len = strlen(str);
	for(i=2;i<len;i++)
	{
		if(str[i]=='I')
		{
			if(str[i-1]=='O')
			{
				if(str[i-2]=='I')
					ioi++;
				else if(str[i-2]=='K')
					koi++;
			}
		}
	}
	printf("%d\n%d\n",koi,ioi);
	return 0;
}
