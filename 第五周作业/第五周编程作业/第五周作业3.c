//��Ŀ���ݣ���while������Բ���ʵĽ���ֵ����ֱ���ۼ���ľ���ֵС�� 0.00001 ��
//��ʽ : pi /4 ��1-1/3+1/5-1/7 ....... 
//�����ʽ://��
//�����ʽ��"pi=%.2f\n"
//������������
//���������pi=3.14
//
#include<stdio.h>
#include<math.h>

int main()
{
	long n = 1;
	float pi = 0;
	double n1 = 0,sum = 0;

	while(1)
	{
		n1 = 1.0 / n;

		if(n % 4 == 1)
		{
			sum += n1;
		}
		else
		{
			sum -= n1;
		}
		
		n += 2;

		if(n1 < 0.00001&&n1 > -0.00001)
		{
			break;
		}
	}


	pi = sum * 4;

	printf("pi=%.2f\n",pi);

	return 0;
}