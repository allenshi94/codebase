#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, maxi, mini, max = 0, min = 100;
	int a[10];

	n = 1 +rand()%9; 
	for (i = 0; i < n; i++)  //生成随机数组
		a[i] = 1+ rand()%9;

	for (i = 0; i < n; i++)
		printf("%d ",a[i]);
	printf("\n");

	for (i = 0; i < n; i++)  
	{

		if (max < a[i])
		{
			max = a[i];
			maxi = i;
		}

		if (min > a[i])
		{
			min = a[i];
			mini = i;
		}
		
	}

	a[maxi] = a[0];
	a[0] = max;
	a[mini] = a[n-1];
	a[n-1] = min;
	for (i = 0; i < n; i++)
		printf("%d ",a[i]);
	printf("\n");

	system("pause");
	return 0;
}
