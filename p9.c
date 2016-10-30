/*************************************************************************
    > File Name: p9.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 15时42分31秒
 ************************************************************************/

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int fahr;
	
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
