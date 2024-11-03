//题目内容：找出一个大于给定整数且紧随这个整数的素数，例如 给定整数8，找到的素数是11。
//输入格式:"%d"
//输出格式："prime=%d\n"
//输入样例：8
//输出样例：prime=11
//
//#include<stdio.h>
//
//int main()
//{
//	int input = 0,i = 0,m = 0,n;
//
//	scanf("%d",&input);
//
//	for(i = 2;;i++)
//	{
//		for(m = 2;m < i;m++)
//		{
//			n = 1;
//			if(i % m == 0)
//			{
//				n = 0;
//				break;
//			}
//		}
//
//		if(i > input&&n != 0)
//		{
//			break;
//		}
//	}
//
//	printf("prime=%d\n",i);
//
//	return 0;
//}