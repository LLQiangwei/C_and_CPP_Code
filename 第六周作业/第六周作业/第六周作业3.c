//��Ŀ���ݣ��ο�ǰ�渻�ı������ݣ��˽�쳲��������У�Ȼ���д������쳲���������ǰn��֮�ͣ�����nҪ����ż�����ɼ������룩��
//�����ʽ:%d
//�����ʽ����sum=%d\n��
//����������20
//���������sum=17710
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