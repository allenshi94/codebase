/*************************************************************************
    > File Name: p17.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月27日 星期四 19时13分45秒
 ************************************************************************/

#include<stdio.h>

int power(int m, int n);

int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
		return 0;

}

int power (int base, int n)
{
	int res = 1;
	for (int i = 1; i <= n; ++i)
	{
		res = res * base;
	}
	return res;
}
