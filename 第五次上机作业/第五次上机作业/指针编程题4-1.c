////数组形式
//#include<stdio.h>
//
//void average(int a[][7],int n)
//{
//	int i = 0,j = 0,sum = 0;
//	for(i = 0;i < n;i++)
//	{
//		sum = 0;
//		for(j = 1;j <= 5;j++)
//		{
//			sum += a[i][j];
//		}
//		a[i][6] = sum / 5;
//	}
//}
//
//void findfail(int a[][7],int n)
//{
//	int i = 0,j = 0,k = 0,count1 = 0,count2 = 0;
//	for(i = 0;i < n;i++)
//	{
//		count1 = 0;
//		for(j = 1;j <= 5;j++)
//		{
//			if(a[i][j] < 60)
//			{
//				count1++;
//			}
//		}
//		if(count1 >= 2)
//		{
//			count2++;
//			for(k = 0;k < 7;k++)
//			{
//				printf("\%d ",a[i][k]);
//			}
//			printf("\n");
//		}
//	}
//	if(count2 == 0)
//	{
//		printf("没有挂科的学生\n");
//	}
//}
//
//void findgood(int a[][7],int n)
//{
//	int i = 0,j = 0,k = 0,count1 = 0,count2 = 0;
//	for(i = 0;i < n;i++)
//	{
//		count1 = 0;
//		for(j = 1;j <= 5;j++)
//		{
//			if(a[i][j] > 85)
//			{
//				count1++;
//			}
//		}
//		if(a[i][6] > 90 || count1 == 5)
//		{
//			count2++;
//			for(k = 0;k < 7;k++)
//			{
//				printf("%d ",a[i][k]);
//			}
//			printf("\n");
//		}
//	}
//	if(count2 == 0)
//	{
//		printf("没有好学生\n");
//	}
//}
//
//int main()
//{
//	int a[6][7] = {0};
//	int i = 0,j = 0,n = 6;
//
//	for(i = 0;i < n;i++)
//	{
//		printf("请输入第%d位学生的学号和成绩：",i + 1);
//		for(j = 0;j <= 5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//
//	average(a,n);
//	printf("-----------------------------------------------\n");
//	findfail(a,n);
//	printf("-----------------------------------------------\n");
//	findgood(a,n);
//
//	return 0;
//}