//题目内容：利用指针编写一函数，输入3个整数，按由大到小的顺序将它们输出。
//输入格式:%d
//输出格式：%3d
//输入样例：25 68 17
//输出样例：68 25 17
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0,b = 0,c = 0;
//	int mid = 0;
//	int *pa = &a,*pb = &b,*pc = &c;
//
//	scanf("%d %d %d",&a,&b,&c);
//
//	if(a < b)
//	{
//		mid = *pa;
//		*pa = *pb;
//		*pb = mid;
//	}
//	if(b < c)
//	{
//		mid = *pb;
//		*pb = *pc;
//		*pc = mid;
//	}
//	if(a < b)
//	{
//		mid = *pa;
//		*pa = *pb;
//		*pb = mid;
//	}
//
//	printf("%3d%3d%3d\n",a,b,c);
//
//	return 0;
//}