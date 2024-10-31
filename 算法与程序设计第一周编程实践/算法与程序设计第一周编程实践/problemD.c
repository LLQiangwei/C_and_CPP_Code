#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

int main()
{
	int n,i,j= 1;
	double r,d,x,y;
	int a[100];

	r = sqrt(100 / PI);

	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		scanf("%lf %lf",&x,&y);
		
		if(y < 0)
		{
			printf("Wrong datas.\n");
		}
		else
		{
			d = sqrt(x * x + y * y);
		}
		
		while(sqrt(j) * r < d)
		{
			j++;
		}

		a[i] = j;
	}

	for(i = 1;i <= n;i++)
	{
		printf("Property %d: This property will begin eroding in year %d.\n",i,a[i]);
	}
	printf("END OF OUTPUT.\n");

	return 0;
}