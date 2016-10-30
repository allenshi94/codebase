/*************************************************************************
    > File Name: p14.c
    > Author: shihaotian
    > Mail: allenshi94@163.com 
    > Created Time: 2016年10月26日 星期三 16时00分38秒
 ************************************************************************/

#include<stdio.h>

#define IN 1
#define OUT 0
main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' ||c == '\n' || c == '\t')
		state = OUT;
		else if (state = OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
