//#include<stdio.h>
//
//int fun(int a,int b,int c)
//{
//	int max = 0;
//
//	if(a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	if(c > max)
//	{
//		max = c;
//	}
//
//	return max;
//}
//
//#define MAX(a,b,c)((a > b ? a : b) > c ? (a > b ? a : b) : c)
//
//int main()
//{
//	int a = 0,b = 0,c = 0,max1 = 0,max2 = 0;
//	
//	printf("������3������");
//	scanf("%d %d %d",&a,&b,&c);
//
//	max1 = fun(a,b,c);
//	printf("������%d\n",max1);
//
//	max2 = MAX(a,b,c);
//	printf("�������ĺ꣺%d\n",max2);
//
//	return 0;
//}