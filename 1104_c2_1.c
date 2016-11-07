#include <stdio.h>
#include <math.h>

double get_num(char str[])
{	//-314.69
	int flag = 1, floatflag = 0, floatterm = 1 ;
	int intePart = 0;
	int ePart = 0;
	int eflag = 1;
	double res;
	double floatPart = 0.0;
	int i = 0;

	if(str[0] == '-')
	{
		flag = -1;
		i++;
	}
	//
	//-314.69
	while(str[i]!='\0' && str[i]!='.' && floatflag == 0 && str[i] != 'e' && str[i] != 'E')
	{
		intePart = intePart * 10 + str[i] - '0';
		printf("%d %d\n",i,str[i]);
		i++;
	}
	//3.14
	if (str[i] == '.')
	{
		floatflag = 1;
		i++;
	}
	
	while(str[i]!='\0' && str[i]!='.' && floatflag == 1 && str[i] != 'e' && str[i] != 'E')
	{
		floatPart = floatPart + (str[i] - '0') * pow(0.1, floatterm);
		floatterm++;
		printf("%d %d\n",i,str[i]);
		i++;
	}

	if (str[i] == 'e' || str[i] == 'E')
	{
		i++;
		ePart = 0;
		if(str[i] == '-')
		{
			eflag = -1;
			i++;
		}
		//
		//-314.69
		while(str[i]!='\0')
		{
			ePart = ePart * 10 + str[i] - '0';
			printf("%d %d\n",i,str[i]);
			i++;
		}
	}



	res = (double)(intePart + floatPart) * flag * pow(10,ePart * eflag);
	printf("%lf\n",res);
	return res;
}

int main()
{
	double d;
	char s[100];
	scanf("%s",s);
	d = get_num(s);
	int i;
	printf("%lf\n",d);

	return 0;
}


