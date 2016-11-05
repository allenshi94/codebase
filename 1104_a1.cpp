#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j,sum = 0;
	int a[100][100];
	scanf("%d",&n);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = 1 + rand()%99;

	for (i = 0; i < n; i++)
		sum += a[i][i];

	printf("%d\n",sum);

	system("pause");
	return 0;
}