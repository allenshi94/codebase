#include <stdio.h>
#include <stdlib.h>

void arrayinput(char a[10])
{
	int i;
	for (i = 0; i < 10; i++)
		a[i] = rand()%10;
}

void arrayoutput(char a[10])
{
	int i;
   
	for (i = 0; i < 10; i++)
		printf("%c",a[i]);
	printf("\n");

}

void arrayreverse(char a[10])
{
	int i,j = 9;
	char temp;
	while(i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	char a[10];

	arrayinput(a);
	arrayreverse(a);
	arrayoutput(a);

	system("pause");
	return 0;
}