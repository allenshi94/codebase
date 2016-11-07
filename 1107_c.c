#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, n1, flag = 1;
	char str[20];
	scanf("%d",&n);
	if (n < 0)
	{
		flag = 0;
		n = -n;
	}
	n1 = n;
	
	while (n1 != 0)
	{
		printf("%d",n1%2);
		n1 /= 2;
	}
	
	if (flag == 0)
		printf("- ");
	else 
		printf(" ");
	n1 = n;

	while (n1 != 0)
	{
		printf("%d",n1%8);
		n1 /= 8;
	}
	if (flag == 0)
		printf("- ");
	else 
		printf(" ");

	while(n)
	{
		if(n % 16 < 10)
			printf("%d",n%16);
		else
			printf("%c",n % 16 - 10 +'A');

		n /= 16;
	}


	if (flag == 0)
		printf("- \n");
	else 
		printf(" \n");


	return 0;
}
		
