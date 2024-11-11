//题目内容：编写函数，求一组整数中大于平均值的个数，数组元素个数任意。例如：给定的一组数为1,3,6,9,4,23,35,67,12,88时，函数值为3。
//函数头定义：int aver(int a[],int n);
//输入格式:%d
//输出格式：%d
//输入样例：1 3 6 9 4 23 35 67 12 88
//输出样例：3
//
#include<stdio.h>

int aver(int a[],int n)
{
	int i = 0,sum = 0,aver = 0,count = 0;

	for(i = 0;i < n;i++)
	{
		sum += a[i];
	}
	
	aver = sum / n;

	for(i = 0;i < n;i++)
	{
		if(a[i] > aver)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int a[100] = {0};
	int n = 0,sum = 0;
	
	while(scanf("%d",&a[n]) != EOF)
	{
		sum += a[n];
		n++;
	}

	printf("%d",aver(a,n));

	return 0;
}