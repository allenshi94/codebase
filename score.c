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
			case(10): printf("����\n");break;	
			case(9): printf("����\n");break;
			case(8): printf("����\n");break;
			case(7): printf("�е�\n");break;
			case(6): printf("�ϸ�\n");break;
			default: printf("���ϸ�\n");break;
			
		}
		
		

	}
	system("pause");
	return 0;
}