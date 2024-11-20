//题目内容：利用指针编写程序，统计字符串的长度。(不要使用求字符串长度函数）
//输入格式gets()
//输出格式："Length of the string is %d\n"
//输入样例：I like programming.
//输出样例：Length of the string is 19
//
//#include<stdio.h>
//
//int main()
//{
//	char s[100];
//	char *ps = s;
//	int i = 0;
//
//	gets(s);
//	for(i = 0;i < 100;i++)
//	{
//		if(*ps == '\0')
//		{
//			break;
//		}
//		ps++;
//	}
//
//	printf("Length of the string is %d\n",i);
//
//	return 0;
//}