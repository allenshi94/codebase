#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,sum=0;
	
	while(i <= 200)
	{
		if(i%2 == 0)
			sum += i;
		i++;
	}
	printf("2 + 4 + 6 + 8 +...+ 200 = %d\n",sum);
	
	system("pause");
	return 0;
}