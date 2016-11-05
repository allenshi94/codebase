#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, a[5], b[5];
	
	for (i = 0; i < 5; i++)
		scanf("%d",&a[i]);

	for (i = 0; i < 5; i++)
		b[i] = a[4-i];
	
	for (i = 0; i < 5; i++)
		printf("%d ",b[i]);
	printf("\n");
	system("pause");
	return 0;
}