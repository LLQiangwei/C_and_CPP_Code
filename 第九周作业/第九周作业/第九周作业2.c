//题目内容：编写函数，求给定字符串中数字字符的个数，在主函数中输入字符串及输出统计的个数。
//输入格式:%s
//输出格式：%d
//输入样例：abc123fg
//输出样例：3
//
//#include<stdio.h>
//#include<string.h>
//
//int s(char a[])
//{
//	int i = 0,sum = 0,n = 0;
//
//	n = strlen(a);
//	
//	for(i = 0;i < n;i++)
//	{
//		if(a[i] >= '0' &&a[i] <= '9')
//		{
//			sum++;
//		}
//	}
//
//	return sum;
//}
//
//int main()
//{
//	char a[100] = {'\0'};
//	int n = 0;
//
//	scanf("%s",a);
//	n = s(a);
//	printf("%d\n",n);
//
//	return 0;
//}