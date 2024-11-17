#include<stdio.h>

int main()
{
	int a[10][3];
	int i = 0,j = 0,sum = 0,ave = 0;
	char c;

	for(i = 0;i < 10;i++)
	{
		printf("请输入第%d名学生的成绩（数学、英语、物理）：",i + 1);
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("NO   MT   EN   PH   SUM   AVE   >90\n");
	printf("-----------------------------------\n");

	for(i = 0;i < 10;i++)
	{
		sum = a[i][0] + a[i][1] + a[i][2];
		ave = sum / 3;
		if(a[i][0] >= 90 && a[i][1] >= 90 && a[i][2] >= 90)
		{
			c = 'Y';
		}
		else
		{
			c = 'N';
		}
		printf("%2d   %d   %d   %d   %3d   %3d   %c\n",i + 1,a[i][0],a[i][1],a[i][2],sum,ave,c);
	}

	return 0;
}