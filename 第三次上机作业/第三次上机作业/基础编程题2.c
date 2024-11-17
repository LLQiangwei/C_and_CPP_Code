//#include<stdio.h>
//
//int main()
//{
//	int i = 0,j = 0,sum = 0,mid = 0;
//	int a[10] = {0};
//	float aver = 0;
//	float b[11] = {0};
//
//	printf("请输入10个整数：");
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&a[i]);
//		sum += a[i];
//	}
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
//			}
//		}
//	}
//
//	aver = sum / 10.0;
//	b[0] = aver;
//
//	for(i = 1;i <= 10;i++)
//	{
//		b[i] = a[i - 1];
//	}
//
//	for(i = 9;i >= 0;i--)
//	{
//		for(j = 0;j <= i;j++)
//		{
//			if(b[j] < b[j + 1])
//			{
//				mid = b[j + 1];
//				b[j + 1] = b[j];
//				b[j] = mid;
//			}
//		}
//	}
//
//	printf("插入平均数并重新排序的数组为：");
//	for(i = 0;i < 11;i++)
//	{
//		printf("%.1f ",b[i]);
//	}
//	printf("\n");
//
//	return 0;
//}