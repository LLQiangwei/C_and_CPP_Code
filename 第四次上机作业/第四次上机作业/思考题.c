//#include<stdio.h>
//
//int counting(int n)
//{
//	int a[100] = {0};
//	int check[100] = {0};
//	int i = 0,j = 0,k = 0,l = 0,mid = 0;
//
//	for(i = 0;i < n;i++)
//	{
//		a[i] = 1;
//	}
//	
//	while(n > 1)
//	{
//		for(i = 0;i < n;i++)
//		{
//			if(a[i] == 1)
//			{
//				k++;
//				if(k == 6)
//				{
//					k = 0;
//					a[i] = 0;
//					check[j++] = i;
//					for(l = i;l < n - 1;l++)
//					{
//						a[l] = a[l + 1];
//					}
//					n--;
//					break;
//				}
//			}
//		}
//	}
//	for(i = 0;i < 100;i++)
//	{
//		if(a[i] == 1)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int n = 13,s = 0;
//	s = counting(n);
//	printf("%d",s);
//	return 0;
//}