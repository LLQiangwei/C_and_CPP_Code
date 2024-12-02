//矩阵运算：读入 1 个正整数 n(1≤n≤6)，再读入 n 阶方阵，计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。
//例：输入    4 
//2 3 4 1
//5 6 1 1
//7 1 8 1
//1 1 1 1
//输出    sum=35

//#include<stdio.h>
//
//int main()
//{
//	printf("请输入矩阵的阶数：");
//	int n;
//	scanf("%d",&n);
//	printf("请输入矩阵内部的数：\n");
//	int A[6][6];
//	for(int i = 0;i < n;i++)
//	{
//		for(int j = 0;j < n;j++)
//		{
//			scanf("%d",&A[i][j]);
//		}
//	}
//	int sum = 0;
//	for(int i = 0;i < n;i++)
//	{
//		for(int j = 0;j < n;j++)
//		{
//			if(i + j != n - 1 && i != n - 1 && j != n - 1)
//			{
//				sum += A[i][j];
//			}
//		}
//	}
//	printf("sum=%d",sum);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	int A[6][6];
	int i = 0,j = 0,sum = 0;
	printf("请输入矩阵的阶数：");
	scanf("%d",&n);

	if (n > 6 || n <= 0) 
	{
        printf("矩阵阶数不合法，请输入1到6之间的整数。\n");
		return 0;
    }

	printf("请输入矩阵内部的数：\n");
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",&A[i][j]);
			if(i + j != n - 1 && i != n - 1 && j != n - 1)
			{
				sum += A[i][j];
			}
		}
	}
	//for(i = 0;i < n;i++)
	//{
	//	for(j = 0;j < n;j++)
	//	{
	//		if(i + j != n - 1 && i != n - 1 && j != n - 1)
	//		{
	//			sum += A[i][j];
	//		}
	//	}
	//}
	printf("sum=%d",sum);
	return 0;
}