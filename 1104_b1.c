#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, a[10][10]={0};

	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (i = 2; i < 10; i++)
		for (j = 0; j <= i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}


