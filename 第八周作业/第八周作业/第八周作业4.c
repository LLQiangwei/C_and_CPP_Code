//��Ŀ���ݣ���д���򣬰Ѽ���������ַ����е�Сд��ĸת��Ϊ��д��ĸ��
//�����ʽ:gets
//�����ʽ��"%s"
//����������aAB23edf
//���������AAB23EDF
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