//�������㣺���� 1 �������� n(1��n��6)���ٶ��� n �׷��󣬼���þ�������Խ��ߡ����һ�к����һ�����������Ԫ��֮�͡�
//��������    4 
//2 3 4 1
//5 6 1 1
//7 1 8 1
//1 1 1 1
//���    sum=35

//#include<stdio.h>
//
//int main()
//{
//	printf("���������Ľ�����");
//	int n;
//	scanf("%d",&n);
//	printf("����������ڲ�������\n");
//	int A[6][6];
//	for(int i = 0;i < n;i++)
//	{
//		for(int j = 0;j < n;j++)
//		{
//			scanf("%d",&A[i][j]);
//		}
//	}
//	int sum = 0;
//	for(int i = 0;i < n;i++)
//	{
//		for(int j = 0;j < n;j++)
//		{
//			if(i + j != n - 1 && i != n - 1 && j != n - 1)
//			{
//				sum += A[i][j];
//			}
//		}
//	}
//	printf("sum=%d",sum);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	int A[6][6];
	int i = 0,j = 0,sum = 0;
	printf("���������Ľ�����");
	scanf("%d",&n);

	if (n > 6 || n <= 0) 
	{
        printf("����������Ϸ���������1��6֮���������\n");
		return 0;
    }

	printf("����������ڲ�������\n");
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",&A[i][j]);
			if(i + j != n - 1 && i != n - 1 && j != n - 1)
			{
				sum += A[i][j];
			}
		}
	}
	//for(i = 0;i < n;i++)
	//{
	//	for(j = 0;j < n;j++)
	//	{
	//		if(i + j != n - 1 && i != n - 1 && j != n - 1)
	//		{
	//			sum += A[i][j];
	//		}
	//	}
	//}
	printf("sum=%d",sum);
	return 0;
}