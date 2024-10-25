#include<stdio.h>

int main()
{
	int i = 0,m = 0,a = 0,b = 0,c = 0,d = 0,output = 0;
	
	for(i = 1;i <100;i++)
	{
		m = i * i;
		a = m / 1000;
		b = (m - a * 1000) / 100;
		c = (m - a * 1000 - b * 100) / 10;
		d = m - a * 1000 - b * 100 - c * 10;
		if(a == b && c == d && a != c)
		{
			printf("%d\n",m);
		}
	}

	return 0;
}