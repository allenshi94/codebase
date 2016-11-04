#include <stdio.h>
#include <stdlib.h>
void printspace(int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf(" ");
}


int main()
{


	int n,i;
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		printspace(2 * n - 2 * i - 2);
		printf("*");
		if ( i == 0 )
		{
			printf("\n");
			continue;
		}
		printspace(4 * i - 1);
		printf("*");
		printf("\n");
	}


	for (i = n - 2; i >= 0; i--)
	{
		printspace(2 * n - 2 * i - 2);
		printf("*");
		if ( i == 0 )
			continue;
		printspace(4 * i - 1);
		printf("*");
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}

