/*************************************************************************
    > File Name: p4.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 13时15分02秒
 ************************************************************************/

#include<stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
