//#include<stdio.h>
//
//int main()
//{
//	int i = 0,j = 0,mid = 0,count = 0;
//	int a[10] = {0};
//
//	printf("������10��������");
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	printf("ԭʼ���飺");
//	for(j = 0;j < 10;j++)
//	{
//		printf("%d ",a[j]);
//	}
//	printf("\n");
//
//	for(i = 8;i >= 0;i--)
//	{
//		for(j = 0;j <= i;j++)
//		{
//			if(a[j] < a[j + 1])
//			{
//				mid = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = mid;
//				count++;
//			}
//		}
//	}
//
//	printf("���������飺");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("�����Ĵ�����%d\n",count);
//
//	return 0;
//}