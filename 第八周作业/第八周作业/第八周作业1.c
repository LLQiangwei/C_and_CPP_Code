//题目内容：将两个字符串连接，不要用stract函数。
//输入格式:"%s"
//输出格式："%s"
//输入样例：
//abc
//edf
//输出样例：abcedf
//
//#include<stdio.h>
//
//int main()
//{
//	char a[100] = {'0'},b[100] = {0};
//	int count = 0,i = 0;
//
//	scanf("%s",a);
//	scanf("%s",b);
//
//	for(i = 0;a[i] != '\0';i++)
//	{
//		count++;
//	}
//
//	for(i = 0;b[i] != '\0';i++)
//	{
//		a[count + i] = b[i];
//	}
//
//	printf("%s\n",a);
//
//	return 0;
//}