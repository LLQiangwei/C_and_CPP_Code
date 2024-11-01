//#include<stdio.h>
//
//int main()
//{
//	int p = 0,e = 0,i = 0,d = 0,m = 0,n = 0,output = 0;
//
//	while(1)
//	{
//		scanf("%d %d %d %d",&p,&e,&i,&d);
//
//		if(p == -1&&e == -1&&i == -1&&d == -1)
//		{
//			break;
//		}
//
//		for(m = 1;m <= 21252;m++)
//		{
//			if ((m + d - p) % 23 == 0 && (m + d - e) % 28 == 0 && (m + d - i) % 33 == 0)
//			{
//				n++;
//				printf("Case %d: the next triple peak occurs in %d days.\n",n,m);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}