#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int input[3];
	int str[3][20] = { 0 };
	for (i = 0; i < 3; i++)
		scanf("%d", &input[i]);
	
	for (i = 0; i < 3; i++)
		if (input[i] < 0 || input[i] > 168)
			exit (0);

	printf("#");
	for (i = 0; i < 3; i++)
	{

		j = 0;
		if (input[i] < 14)
			printf("0");
		if (input[i] == 0)
			printf("0");
		while (input[i])
		{
			if (input[i] % 13 < 10)
				str[i][j] = input[i] % 13 + '0';
			else
				str[i][j] = input[i] % 13 - 10 + 'A';

			input[i] /= 13;
			j++;
		}
		while (j >-0)
		{
			j--;
			printf("%c", str[i][j]);

		}
	}

	
	printf("\n");


	//for (i = 0; i < 3; i++)
	//	for (j = sizeof(str[i]); j > 0; j--)





	system("pause");
	return 0;
}
