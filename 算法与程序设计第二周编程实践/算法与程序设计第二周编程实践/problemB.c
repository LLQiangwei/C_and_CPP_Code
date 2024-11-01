//#include<stdio.h>
//
//int main()
//{
//	int n,sum = 0,a[100] = {0},h,j,k,i;
//	scanf("%d",&n);
//
//	for(i = 2;sum + i <= n;i++)
//	{
//		a[i] = i;
//		sum += i;
//	}
//
//	h = i;
//
//	for(j = n - sum;j > 0;j--)
//	{
//		a[--i]++;
//		if(i == 2)
//		{
//			i = h;
//		}
//	}
//
//	for(k = 2;k < h;k++)
//	{
//		printf("%d ",a[k]);
//	}
//
//	return 0;
//}