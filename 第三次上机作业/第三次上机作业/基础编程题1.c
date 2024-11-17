//#include<stdio.h>
//
//int main()
//{
//	int i = 0,j = 0,mid = 0,count = 0;
//	int a[10] = {0};
//
//	printf("请输入10个整数：");
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	printf("原始数组：");
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
//	printf("排序后的数组：");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("交换的次数：%d\n",count);
//
//	return 0;
//}