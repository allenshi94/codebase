/*************************************************************************
    > File Name: p11.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 13时22分59秒
 ************************************************************************/

#include<stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
