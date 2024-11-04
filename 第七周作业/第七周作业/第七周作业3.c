//题目内容：输入一维数组的6个元素，将最大值与最后一个交换。
//输入格式:"%d"
//输出格式："%d\n"
//输入样例：3 5 6 8 1 2
//输出样例：
//3
//5
//6
//2
//1
//8
//
#include<stdio.h>

int main()
{
	int n = 6,i = 0,max = 0,mid = 0;
	int a[6] = {0};

	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0;i < n;i++)
	{
		if(a[max] < a[i])
		{
			max = i;
		}
	}

	mid = a[max];
	a[max] = a[5];
	a[5] = mid;

	for(i = 0;i < n;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}