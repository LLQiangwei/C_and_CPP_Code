//#include<stdio.h>
//#include<string.h>
//#define N 20
//
//void input(char name[][100],int score[])
//{
//	int i = 0;
//	for(i = 0;i < N;i++)
//	{
//		printf("请输入第%d名学生的姓名、高考总分：",i + 1);
//		scanf("%s %d",&name[i][0],&score[i]);
//	}
//	printf("------------------------------------------\n");
//}
//
//void sort(int score[],char name[][100])
//{
//	int i = 0,j = 0,mid = 0;
//	char mid1[100] = {'\0'};
//	for(i = N - 2;i >= 0;i--)
//	{
//		for(j = 0;j <= i;j++)
//		{
//			if(score[j] < score[j + 1])
//			{
//				mid = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = mid;
//				strcpy(mid1,name[j]);
//				strcpy(name[j],name[j + 1]);
//				strcpy(name[j + 1],mid1);
//			}
//		}
//	}
//}
//
//void display(int score[],char name[][100])
//{
//	int i = 0;
//	printf("排序后的学生序号、姓名及其高考总分：\n");
//	for(i = 0;i < N;i++)
//	{
//		printf("(%d) %s %d\n",i + 1,name[i],score[i]);
//	}
//	printf("------------------------------------------\n");
//}
//
//int search(char name1[],char name[][100])
//{
//	int i = 0;
//	for(i = 0;i < N;i++)
//	{
//		if(strcmp(name1,name[i]) == 0)
//		{
//			return (i + 1);
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int score[20] = {0};
//	char name[20][100] = {'\0'};
//	char name1[100] = {'\0'};
//
//	input(name,score);
//	sort(score,name);
//	display(score,name);
//	printf("请输入要查询的学生的姓名：");
//	scanf("%s",name1);
//	if(search(name1,name) >= 1)
//	{
//		printf("该学生为第%d名\n",search(name1,name));
//	}
//	if(search(name1,name) == -1)
//	{
//		printf("查找失败\n");
//	}
//	
//
//	return 0;
//}