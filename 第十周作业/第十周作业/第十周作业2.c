//��Ŀ���ݣ���д������ͨ����������10���������ҳ���������������С�������������������������ݺͽ����
//�����ʽ:%d
//�����ʽ��max=%d,min=%d
//����������2 3 4 1 7 6 8 9 26 35 
//���������max=35,min=1
//
//#include<stdio.h>
//
//int max(int a[])
//{
//	int i = 0,max = 0;
//
//	max = a[0];
//	for(i = 1;i < 10;i++)
//	{
//		if(a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//
//	return max;
//}
//
//int min(int a[])
//{
//	int i = 0,min = 0;
//
//	min = a[0];
//	for(i = 1;i < 10;i++)
//	{
//		if(a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//
//	return min;
//}
//
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	printf("max=%d,min=%d\n",max(a),min(a));
//
//	return 0;
//}