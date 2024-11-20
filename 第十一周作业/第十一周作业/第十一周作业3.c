//题目内容：利用指针编写程序，求一维数组中的最大和最小的元素值。使用数组 int array[10]
//输入格式:%d
//输出格式：printf("max=%d,min=%d",max,min);
//输入样例：10 7 19 29 4 0 7 35 -16 21
//输出样例：max=35,min=-16
//
#include<stdio.h>

int main()
{
	int array[10] = {0};
	int *pa = array;
	int max = 0,min = 0,i = 0;

	for(i = 0;i < 10;i++)
	{
		scanf("%d",&array[i]);
	}

	for(i = 0;i < 10;i++)
	{
		if(*pa > max)
		{
			max = *pa;
		}
		if(*pa < min)
		{
			min = *pa;
		}
		pa++;
	}

	printf("max=%d,min=%d\n",max,min);

	return 0;
}