//#include<stdio.h>
//
//int fun(int n)
//{
//	int s = 0,i = 0,j = 0,ji = 1;
//
//	for(i = 1;i <= n;i++)
//	{
//		ji = 1;
//		for(j = 1;j <= i;j++)
//		{
//			ji *= j;
//		}
//		s += ji;
//	}
//
//	return s;
//}
//
//int main()
//{
//	int n = 0,s = 0;
//
//	printf("请输入n的值：");
//	scanf("%d",&n);
//	s = fun(n);
//	printf("结果为：%d\n",s);
//
//	return 0;
//}