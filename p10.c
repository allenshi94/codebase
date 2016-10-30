/*************************************************************************
    > File Name: 10.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 15时46分38秒
 ************************************************************************/

#include<stdio.h>

main()
{
	int c;

	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
}
