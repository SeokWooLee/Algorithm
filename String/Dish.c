#include <stdio.h>
#include <string.h>

int main(void) {
	char str[51];
	int i, len;
	int count=10;
	scanf("%s",str);
	len = strlen(str);
	for(i=1;i<len;i++)
	{
		if(str[i-1]==str[i])
			count+=5;
		else
			count+=10;
	}
	printf("%d\n",count);
	return 0;
}
