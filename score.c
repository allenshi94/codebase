#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	int i = 1;
	score = scanf("%d",&score);
	if (score >= 0 && score <= 100)
	{
		switch (score/10)
		{
			case(10): printf("优秀\n");break;	
			case(9): printf("优秀\n");break;
			case(8): printf("良好\n");break;
			case(7): printf("中等\n");break;
			case(6): printf("合格\n");break;
			default: printf("不合格\n");break;
			
		}
		
		

	}
	system("pause");
	return 0;
}