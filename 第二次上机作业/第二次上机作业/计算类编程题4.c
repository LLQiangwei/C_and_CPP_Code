//#include<stdio.h>
//
//int main()
//{
//	int n = 0,i = 0,m = 0;
//	float sum = 1,sumsum = 0;
//
//	scanf("%d",&n);
//
//	for(i = 1;i <= n;i++)
//	{
//		for(m = 1;m <= i;m++)
//		{
//			sum *= m;
//		}
//
//		sumsum += 1 / sum;
//		sum = 1;
//
//	}
//
//	printf("1 + 1/2! +....+ 1/%d!=%.4f\n",n,sumsum);
//
//	return 0;
//}