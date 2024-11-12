//题目内容：编写求x的n次方的递归函数，在主函数调用并输出。(x为double型，n为整型，函数类型为double型）
//输入格式:%lf%d
//输出格式：%f
//输入样例：4 3
//输出样例：64.000000
//
//#include<stdio.h>
//
//double di_gui(double x,int n)
//{
//	if(n == 0)
//	{
//		return 1;
//	}
//	else if(n < 0)
//	{
//		return 1 / di_gui(x,-n);
//	}
//	else
//	{
//		return x * di_gui(x,n - 1);
//	}
//}
//
//int main()
//{
//	double x = 0;
//	int n = 0;
//
//	scanf("%lf%d",&x,&n);
//	printf("%f\n",(float)di_gui(x,n));
//
//	return 0;
//}