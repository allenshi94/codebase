#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	double s;

	for ( i = 1;1;i++)
	{
		s = 3.1415926 * i * i;
		if ( s > 200)
			break;
		printf("%d %f\n", i, s);
	}
	
	system("pause");
	return 0;
}
