/*************************************************************************
    > File Name: 1006.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月31日 星期一 15时50分10秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int b,s,g;
	if (num < 1000)
	{
		if (num >= 100)
		{
		b = num/100;
			s = num / 10 - 10 * b;
			g = num - 100 * b - 10 * s;
		}
		else if(num < 100 && num >= 10)
		{
			b = 0;
			s = num/10;
			g = num - 10 * s;
		}
		else
		{
			b = 0;
			s = 0;
			g = num;
		}

	int i;
	for (i = 1;i<=b;i++)
	{
		printf("B");
	}

	for(i=1;i<=s;i++)
	{
		printf("S");
	}
	
	for(i=1;i<=g;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	return 0;
}
}
