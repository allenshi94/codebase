/*************************************************************************
    > File Name: p8.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 15时40分06秒
 ************************************************************************/

#include<stdio.h>

main()
{
	int fahr;
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
