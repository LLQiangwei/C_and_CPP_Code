//题目内容：编写函数，根据给定公式计算e的值：1+1/1!+1/2!+1/3!+……+1/n!的值（取前n项），要求在主函数中输入n的值，调用函数并输出结果。
//输入格式:%d
//输出格式e=%.4f
//输入样例：10
//输出样例：e=2.7183
//
//#include<stdio.h>
//
//float ex(int n)
//{
//	int i = 0,j = 0;
//	float sum = 1,ji = 1;
//
//	for(i = 1;i <= n;i++)
//	{
//		ji = 1;
//
//		for(j = 1;j <= i;j++)
//		{
//			ji *= j;
//		}
//
//		sum += 1 / ji;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	float e = 0;
//
//	scanf("%d",&n);
//
//	e = ex(n);
//
//	printf("e=%.4f\n",e);
//
//	return 0;
//}