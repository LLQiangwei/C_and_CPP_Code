//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define maxn 1005
//
//bool cmp(int a,int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int n;
//	while(scanf("%d",&n) && n != 0)
//	{
//		int i,qs,qe,ts,te,win = 0;
//		int q[maxn],t[maxn];
//
//		for(i = 0;i < n;i++)
//		{
//			scanf("%d",&t[i]);
//		}
//		for(i = 0;i < n;i++)
//		{
//			scanf("%d",&q[i]);
//		}
//
//		qs = ts = 0;
//		qe = te =  n - 1;
//
//		sort(q,q + n,cmp);
//		sort(t,t + n,cmp);
//
//		while(qs <= qe)
//		{
//			if(t[ts] > q[qs])
//			{
//				win++;
//				ts++,qs++;
//			}
//			else if(t[ts] < q[qs])
//			{
//				win--;
//				te--,qs++;
//			}
//			else if(t[te] > q[qe])
//			{
//				win++;
//				te--,qe--;
//			}
//			else
//			{
//				if(t[te] < q[qs])
//					win--;
//					te--,qs++;
//			}
//		}
//
//		printf("%d\n",win * 200);
//	}
//
//	return 0;
//}