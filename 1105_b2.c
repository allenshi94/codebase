#include <stdio.h>
#include <stdlib.h>

int main()
{
		int i, j, n, min, max;
		double a[100][100];

		scanf("%d%d%d",&n,&min,&max);

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				a[i][j] = (double)(rand()%100/100)*(max-min)+min;


		for (i = 0; i < n; i++,printf("\n"))
			for (j = 0; j < n; j++)
				printf("%lf\t",a[i][j]);

		system("pause");
		return 0;
}
			

		