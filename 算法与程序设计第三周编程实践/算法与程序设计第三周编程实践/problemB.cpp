#include<stdio.h>
#include<algorithm>
const int INF = 0x3f3f3f3f;
using namespace std;

const int MAX_N = 100000;
int n,m,x[MAX_N];

bool C(int d)
{
	int last = 0;
	for(int i = 1;i < m;i++)
	{
		int crt = last + 1;
		while(crt < n && x[crt] - x[last] < d)
		{
			crt++;
		}

		if(crt == n)
		{
			return false;
		}

		last = crt;
	}

	return true;
}

void solve()
{
	sort(x,x+n);

	int lb = 0,ub = INF;

	while(ub - lb > 1)
	{
		int mid = (lb + ub) / 2;
		if(C(mid))
		{
			lb = mid;
		}
		else
		{
			ub = mid;
		}
	}

	printf("%d",lb);
}

int main()
{
	scanf("%d %d",&n,&m);

	for(int i = 0;i < n;i++)
	{
		scanf("%d",&x[i]);
	}

	solve();

	return 0;
}