//#include<stdio.h>
//
//int zdgys/*最大公因数*/(int a,int b)
//{
//	int i = 2;
//	for(i = a > b ? a : b;i >= 1;i--)
//	{
//		if(a % i == 0 && b % i == 0)
//		{
//			return i;
//			break;
//		}
//	}
//
//	return 1;
//}
//
//void printfs/*打印分数*/(int a,int b)
//{
//	if(a < 0)
//	{
//		printf("-");
//		a = -a;
//	}
//	if(b < 0)
//	{
//		printf("-");
//		b = -b;
//	}
//	if(a == 0)
//	{
//		printf("0");
//	}
//	else if(a % b == 0)
//	{
//		printf("%d",a / b);
//	}
//	else
//	{
//		printf("%d/%d",a,b);
//	}
//}
//
//void jia(int a1,int a2,int b1,int b2)
//{
//	int a = a1 * b2 + a2 * b1;
//	int b = b1 * b2;
//	int n = zdgys(a,b);
//	a /= n;
//	b /= n;
//	printf("%d/%d+%d/%d=",a1,b1,a2,b2);
//	printfs(a,b);
//}
//
//void jian(int a1,int a2,int b1,int b2)
//{
//	int a = a1 * b2 - a2 * b1;
//	int b = b1 * b2;
//	int n = zdgys(a,b);
//	a /= n;
//	b /= n;
//	printf("%d/%d-%d/%d=",a1,b1,a2,b2);
//	printfs(a,b);
//}
//
//void cheng(int a1,int a2,int b1,int b2)
//{
//	int a = a1 * a2;
//	int b = b1 * b2;
//	int n = zdgys(a,b);
//	a /= n;
//	b /= n;
//	printf("%d/%d*%d/%d=",a1,b1,a2,b2);
//	printfs(a,b);
//}
//
//void chu(int a1,int a2,int b1,int b2)
//{
//	int a = a1 * b2;
//	int b = b1 * a2;
//	int n = zdgys(a,b);
//	a /= n;
//	b /= n;
//	printf("%d/%d*%d/%d=",a1,b1,a2,b2);
//	printfs(a,b);
//}
//
//int main()
//{
//	int a1 = 0,a2 = 0,b1 = 0,b2 = 0;
//	char fuhao;
//
//	scanf("%d/%d %c %d/%d",&a1,&b1,&fuhao,&a2,&b2);
//
//	switch(fuhao)
//	{
//	case '+':
//		jia(a1,a2,b1,b2);
//		break;
//	case '-':
//		jian(a1,a2,b1,b2);
//		break;
//	case '*':
//		cheng(a1,a2,b1,b2);
//		break;
//	case '/':
//		chu(a1,a2,b1,b2);
//	}
//	printf("\n");
//
//	return 0;
//}