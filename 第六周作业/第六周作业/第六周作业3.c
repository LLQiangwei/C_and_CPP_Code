//题目内容：参考前面富文本的内容，了解斐波那契数列，然后编写程序求斐波那契数列前n项之和（项数n要求是偶数并由键盘输入）。
//输入格式:%d
//输出格式：“sum=%d\n”
//输入样例：20
//输出样例：sum=17710
//
#include<stdio.h>

int main()
{
	int input = 0,sum = 2,i = 0,a = 1,b = 1,a1 = 0,b1 = 0;

	scanf("%d",&input);
	
	for(i = 3;i <= input;i++)
	{
		b1 = a + b;
		a1 = b;
		sum += b1;
		b = b1;
		a = a1;
	}

	printf("sum=%d\n",sum);

	return 0;
}