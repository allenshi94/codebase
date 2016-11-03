#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,sum=0;
	
	for(i = 0; i <= 200; i+=2)
		sum += i;
	
	printf("2 + 4 + 6 + 8 +...+ 200 = %d\n",sum);
	
	system("pause");
	return 0;
}