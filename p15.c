/*************************************************************************
    > File Name: p15.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月27日 星期四 19时01分38秒
 ************************************************************************/

#include<stdio.h>

main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother =0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
			else if (c == ' ' || c == '\n' || c || '\t')
				++nwhite;
			else 
				++nother;

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", whilte space = %d, other = %d\n", nwhite, nother);
}
