#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, j, i = 0,count1;
	
	int array[3][10];
	int count[3];
	
	printf("#");
	while(i < 3)
	{
		scanf("%d",&n)		
		count1 = 0;		
		while(n)	
		{	
		if(n % 13 < 10)
			array[i][count1] = n%13;
		else
			array[i][count1] = n % 13 - 10 +'A';

		n /= 13;	
		count1++;
		}
		i++;
		count[i] = count1-1;

	}

	for (i = 0; i <= 3;i++)
		for (j = count[i]; j >= 0; j--)
			printf("%d",array[i][j]);

	


	return 0;
}
		
