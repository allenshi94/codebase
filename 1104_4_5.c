#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, imax, jmax, n, m, max = 0;
	int a[10][10];
	scanf("%d%d",&n,&m);
	
	if (n >= 1 && n <= 1000 && m >= 1 && m <= 1000)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				a[i][j] = 1 + rand()%999;
		}
		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] > max)
				{
					max = a[i][j];
					imax = i;
					jmax = j;
				}
			}

		}
		printf("max = %d\ni = %d\nj = %d\n",max,imax,jmax);

	
	}

		system("pause");
		return 0;
}