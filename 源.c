#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, n1, i, j, flag = 1;
	int str[3][20] = { 0 };
	scanf("%d", &n);
	if (n < 0)
	{
		flag = 0;
		n = -n;
	}
	n1 = n;
	j = 0;
	if (flag == 0)
		printf("-");
	while (n1)
	{
		str[0][j] = n1 % 2;
		n1 /= 2;
		j++;
		
	}

	while (j > 0)
	{
		j--;
		printf("%d", str[0][j]);

	}
	printf("\n");

	n1 = n;
	j = 0;
	while (n1)
	{
		str[1][j] = n1 % 8;
		n1 /= 8;
		j++;
	}
	if (flag == 0)
		printf("-");
	while (j > 0)
	{
		j--;
		printf("%d", str[1][j]);

	}
	printf("\n");

	

	j = 0;
	while (n)
	{
		if (n % 16 < 10)
			str[2][j] = n % 16;
		else
			str[2][j] = n % 16 - 10 + 'A';
		
		n /= 16;
		j++;
	}
	if (flag == 0)
		printf("-");
	while (j >- 0)
	{
		j--;
		printf("%d", str[2][j]);

	}
	printf("\n");
	

			


	

	system("pause");
	return 0;
}
