//#include<stdio.h>
//
//int main()
//{
//	int n = 0,i = 0,j = 0,sum = 0;
//	int a[6][6] = {0};
//
//	scanf("%d",&n);
//	
//	for(i = 0;i < n;i++)
//	{
//		for(j = 0;j < n;j++)
//		{
//			scanf("%d",&a[i][j]);
//			sum += a[i][j];
//		}
//	}
//
//	for(i = 0;i < n;i++)
//	{
//		sum -= a[i][n - i - 1];
//		sum -= a[n - 1][i];
//		sum -= a[i][n - 1];
//	}
//	sum = sum + a[n - 1][0] + a[0][n - 1] + a[n - 1][n - 1];
//
//	printf("sum=%d\n",sum);
//
//	return 0;
//}