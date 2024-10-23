#include<stdio.h>

int main()
{
	int input , input1 , input2 , input3 , input4 , hd , qu , di , ni , ce;
	printf("The change is : ");
	scanf("%d",&input);

	hd = input/50;
	input1 = input%50;

	qu = input1/25;
	input2 = input1%25;

	di = input2/10;
	input3 = input2%10;

	ni = input3/5;
	input4 = input3%5;

	ce = input4;

	printf("%d美分",input);

	if(hd != 0)
	{
		printf("等于%d个50美分，",hd);
	}
	
	if(qu != 0)
	{
		printf("加上%d个25美分，",qu);
	}

	if(di != 0)
	{
		printf("加上%d个10美分，",di);
	}

	if(ni != 0)
	{
		printf("加上%d个5美分，",ni);
	}

	if(ce != 0)
	{
		printf("加上%d个1美分。\n",ce);
	}

	return 0;
}