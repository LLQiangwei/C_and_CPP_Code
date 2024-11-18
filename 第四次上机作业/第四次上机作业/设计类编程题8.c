#include<stdio.h>

int fun(int a[][5],int b[][5])
{
	int mse = 0,i = 0,j = 0,sum = 0;

	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{
			sum += (a[i][j] - b[i][j]) * (a[i][j] - b[i][j]);
		}
	}

	mse = sum / 20;
	return mse;
}

int main()
{
	int a[4][5],b[4][5];
	int i = 0,j = 0;

	printf("请输入数组a：\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("请输入数组b：\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("MSE=%d\n",fun(a,b));

	return 0;
}