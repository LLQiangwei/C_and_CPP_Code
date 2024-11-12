//题目内容：编写函数，输入N个整数，将它们存入数组a中，再输入一个整数x，然后在数组中查找x，如果找到，输出相应的下标，否则，输出"Not Found"。要求在主函数中输入10个整数及查找结果。
//输入格式：
//%d
//%d
//输出格式：%d
//输入样例：1 2 3 4 5 6 7 8 910
//输入：5
//或者输入11：
//输出样例：
//5
//Not Found
//
#include<stdio.h>

void f(int a[],int n)
{
	int i = 0,check = 0;

	for(i = 0;i < 10;i++)
	{
		if(a[i] == n)
		{
			check = 1;
			printf("%d\n",i + 1);
			break;
		}
	}

	if(check == 0)
	{
		printf("Not Found\n");
	}
}

int main()
{
	int a[10] = {0};
	int n = 0,i = 0;

	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	f(a,n);

	return 0;
}