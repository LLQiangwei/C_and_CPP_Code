//��Ŀ���ݣ�����һά�����6��Ԫ�أ������ֵ�����һ��������
//�����ʽ:"%d"
//�����ʽ��"%d\n"
//����������3 5 6 8 1 2
//���������
//3
//5
//6
//2
//1
//8
//
#include<stdio.h>

int main()
{
	int n = 6,i = 0,max = 0,mid = 0;
	int a[6] = {0};

	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0;i < n;i++)
	{
		if(a[max] < a[i])
		{
			max = i;
		}
	}

	mid = a[max];
	a[max] = a[5];
	a[5] = mid;

	for(i = 0;i < n;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}