//#include<cstdio>
//using namespace std;
//
//int fun(int m,int n)
//{
//	if(n == 1 || m == 1 || n == 0)
//	{
//		return 1;
//	}
//	if(m < n)
//	{
//		return fun(m,m);
//	}
//	else
//	{
//		return fun(m - n,n) + fun(m,n - 1);
//	}
//}
//
//int main()
//{
//	int t,m,n;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d%d",&m,&n);
//		printf("%d\n",fun(m,n));
//	}
//
//	return 0;
//}