//题目内容：定义一维整型数组，输入5个数，从大到小排序，输出次最大值。
//输入格式:"%d"
//输出格式："次最大值=%d"
//输入样例：1 5 6 8 2
//输出样例：次最大值=6
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 5,i = 0;
//	int a[5] = {0};
//	int j = 0,max = 0,mid = 0;
//
//	for(i = 0;i < n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	for(i = 0;i < n - 1;i++)
//	{
//		max = i;
//		for(j = i;j < n;j++)
//		{
//			if(a[max] < a[j])
//			{
//				max = j;
//			}
//		}
//
//		mid = a[max];
//		a[max] = a[i];
//		a[i] = mid;
//	}
//
//	printf("次最大值=%d\n",a[1]);
//
//	return 0;
//}