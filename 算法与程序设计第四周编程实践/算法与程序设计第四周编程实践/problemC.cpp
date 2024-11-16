#include<cstdio>
#include<iostream>
using namespace std;
const int maxn = 500010;
int a[maxn],temp[maxn];
long long sum;
void merge_i(int *a,int low,int mid,int high)
{
	int i,j,k;
	i = low,j = mid + 1,k = low;

	while(i <= mid && j <= high)
	{
		if(a[i] > a[j])
		{
			sum += j - k;
			cout<<"<"<<sum<<">";
			temp[k++] = a[j++];
		}
		else
		{
			temp[k++] = a[i++];
		}
	}
	while(i <= mid)
	{
		temp[k++] = a[i++];
	}
	while(j <= high)
	{
		temp[k++] = a[j++];
	}
	for(int i = low;i <= high;i++)
	{
		a[i] = temp[i];
		cout<<a[i]<<" ";
		cout<<endl;
	}
}
void merge_sort(int *a,int low,int high)
{
	if(low < high)
	{
		int mid = (low + high) / 2;
		merge_sort(a,low,mid);
		merge_sort(a,mid + 1,high);
		merge_i(a,low,mid,high);
	}
}
int main()
{
	int n;
	while(scanf("%d",&n) != EOF && n)
	{
		sum = 0;
		for(int i = 1;i <= n;i++)
		{
			scanf("%d",&a[i]);
		}
		merge_sort(a,1,n);
		printf("%lld\n",sum);
	}

	return 0;
}