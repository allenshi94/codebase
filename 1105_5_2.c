#include <stdio.h>
#include <stdlib.h>
int temp;
void numswap(int *a, int *b)
{
	
 	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	numswap(a,b);
	printf("%d %d",a,b);


	system("pause");
	return 0;
}