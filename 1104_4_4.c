#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	int a[3][2] = {1,3,5,2,4,6};
	int b[2][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			b[j][i] = a[i][j];

	for (i = 0; i < 2; i++)
		{
		for (j = 0; j < 3; j++)
		
			printf("%d",b[i][j]);

		printf("\n");
			}
	system("pause");
	return 0;
}