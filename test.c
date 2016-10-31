#include <stdio.h>
#include <math.h>

int main()
{
int num;
int sum = 0;
	scanf("%d",&num);
	if (num <= 10000000000)
	{
	while(num>0)
	{
		sum = sum + num % 10;
		num = (num - num % 10)/10;
	}
	}

  int array[3];
  int i;
  for ( i = 2; i >= 0; i--)
  {
    if (sum > 0)
    {
      array[i] = sum - sum / 10 * 10;
      sum = (sum - array[i])/10;
    }
    else 
      array[i] = 99999;
  }

   i = 0;
  while (i <= 2)
  {
    switch(array[i])
     {
        case 0:
            printf("ling ");
            break;
        case 1:
            printf("yi ");
            break;
        case 2:
            printf("er ");
            break;
        case 3:
            printf("san ");
            break;
        case 4:
            printf("si ");
            break;
        case 5:
            printf("wu ");
            break;
        case 6:
            printf("liu ");
            break;
        case 7:
            printf("qi ");
            break;
        case 8:
            printf("ba ");
            break;
        case 9:
            printf("jiu ");
            break;
        default:
            break;
    }
  }
    printf("\b");
    return 0;
}
