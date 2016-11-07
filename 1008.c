#include <stdio.h>

int main()
{
	int n, sum = 0, now, request, temp, i = 0;

	now = 0;
	scanf("%d",&n);
	while(i < n && scanf("%d",&request)!=EOF)
	{
		if (request > now)
		{
			sum += (request - now) * 6;
			sum += 5;
//			printf("%d %d\n",now, sum);
			i++;
			now = request;

		}
		else
		{
			sum += (now-request) *4;
			sum += 5;
//			printf("%d %d\n",request, sum);
			i++;
			now = request;
		}
	}

	printf("%d\n",sum);
	return 0;
}
