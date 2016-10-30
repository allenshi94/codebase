/*************************************************************************
    > File Name: p12_1.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 15时50分40秒
 ************************************************************************/

#include<stdio.h>

main()
{
	long nc;

	nc = 0;
	while ( getchar() != EOF)
		++nc;
	printf("%1d\n",nc);
}
