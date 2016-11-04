#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1[100], a2[100], i;


	for (i = 0; i < 100; i++)  //生成随机数组
		a1[i] = 1 + rand()%99;

	for (i = 0; i < 100; i++)  //拷贝到另一个数组
		a2[i] = a1[i];
	
	for (i = 0; i < 100; i++)
		printf ("%d\n", a2[i]);

	system("pause");
	return 0;
}