//��Ŀ���ݣ���д����������N�������������Ǵ�������a�У�������һ������x��Ȼ���������в���x������ҵ��������Ӧ���±꣬�������"Not Found"��Ҫ����������������10�����������ҽ����
//�����ʽ��
//%d
//%d
//�����ʽ��%d
//����������1 2 3 4 5 6 7 8 910
//���룺5
//��������11��
//���������
//5
//Not Found
//
#include<stdio.h>

void f(int a[],int n)
{
	int i = 0,check = 0;

	for(i = 0;i < 10;i++)
	{
		if(a[i] == n)
		{
			check = 1;
			printf("%d\n",i + 1);
			break;
		}
	}

	if(check == 0)
	{
		printf("Not Found\n");
	}
}

int main()
{
	int a[10] = {0};
	int n = 0,i = 0;

	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	f(a,n);

	return 0;
}