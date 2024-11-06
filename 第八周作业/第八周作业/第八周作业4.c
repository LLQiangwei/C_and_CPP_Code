//题目内容：编写程序，把键盘输入的字符串中的小写字母转换为大写字母。
//输入格式:gets
//输出格式："%s"
//输入样例：aAB23edf
//输出样例：AAB23EDF
//
#include<stdio.h>

int main()
{
	char a[100] = {'\0'};
	int i = 0;

	gets(a);

	for(i = 0;i < 100;i++)
	{
		if(a[i] == '\0')
		{
			break;
		}

		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}

	printf("%s\n",a);

	return 0;
}