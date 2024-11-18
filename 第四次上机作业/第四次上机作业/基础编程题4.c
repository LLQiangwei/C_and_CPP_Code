//#include<stdio.h>
//
//void transpose(int a[][6],int n)
//{
//	int i = 0,j = 0,mid = 0;
//
//	for(i = 0;i < n;i++)
//	{
//		for(j = i;j < n;j++)
//		{
//			mid = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = mid;
//		}
//	}
//}
//
//int main()
//{
//	int a[6][6] = {0};
//	int n = 0,i = 0,j = 0;
//
//	scanf("%d",&n);
//
//	for(i = 0;i < n;i++)
//	{
//		for(j = 0;j < n;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\n");
//
//	transpose(a,n);
//
//	for(i = 0;i < n;i++)
//	{
//		for(j = 0;j < n;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}