#include<stdio.h>
#include<string.h>
#define N 10
#define M 80

void input(char str[][M],int len)//����len���ַ���
{
	int n = 0;
	printf("input %d strings:\n",len);
	while(n < len)
	{
		gets(str[n++]);
	}
}

void min_str(char (*str)[M],int len)//�ҳ���С���ַ��������һ���ַ�������
{
	char *min,(*p)[M],temp[M];
	min = str[0];
	for(p = str + 1;p < str + len;p++)
	{
		if(strcmp(*p,min) < 0)
		{
			min = *p;
		}
	}
	strcpy(temp,min);
	strcpy(min,*str);
	strcpy(*str,temp);
}

void output(char s[][M],int len)//�����������ַ���
{
	int n;
	printf("\nThe result is:\n");
	for(n = 0;n < len;n++)
	{
		printf("%s\n",s[n]);
	}
}

void main()
{
	char str[N][M];
	int n;
	printf("input n(<10):");
	scanf("%d",&n);
	getchar();
	input(str,n);
	min_str(str,n);
	output(str,n);
}