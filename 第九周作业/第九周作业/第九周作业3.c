//��Ŀ���ݣ���д��������һ�������д���ƽ��ֵ�ĸ���������Ԫ�ظ������⡣���磺������һ����Ϊ1,3,6,9,4,23,35,67,12,88ʱ������ֵΪ3��
//����ͷ���壺int aver(int a[],int n);
//�����ʽ:%d
//�����ʽ��%d
//����������1 3 6 9 4 23 35 67 12 88
//���������3
//
#include<stdio.h>

int aver(int a[],int n)
{
	int i = 0,sum = 0,aver = 0,count = 0;

	for(i = 0;i < n;i++)
	{
		sum += a[i];
	}
	
	aver = sum / n;

	for(i = 0;i < n;i++)
	{
		if(a[i] > aver)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int a[100] = {0};
	int n = 0,sum = 0;
	
	while(scanf("%d",&a[n]) != EOF)
	{
		sum += a[n];
		n++;
	}

	printf("%d",aver(a,n));

	return 0;
}