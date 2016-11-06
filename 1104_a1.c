#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,r,l;

	scanf("%d",&n);

	switch(n)
	{
	case 1: scanf("%d",&r);printf("sphere %f\n",4/3*3.14*r*r*r);break;
	case 2: scanf("%d%d",&r,&l);printf("cylinder %f\n",3.14*r*r*l);break;
	case 3: scanf("%d%d",&r,&l);printf("conoid %f\n",3.14*r*r*l/3);break;

	}

	system("pause");
	return 0;

}