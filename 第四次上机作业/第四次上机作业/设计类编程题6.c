//#include<stdio.h>
//#include<string.h>
//#define N 20
//
//void input(char name[][100],int score[])
//{
//	int i = 0;
//	for(i = 0;i < N;i++)
//	{
//		printf("�������%d��ѧ�����������߿��ܷ֣�",i + 1);
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
//	printf("������ѧ����š���������߿��ܷ֣�\n");
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
//	printf("������Ҫ��ѯ��ѧ����������");
//	scanf("%s",name1);
//	if(search(name1,name) >= 1)
//	{
//		printf("��ѧ��Ϊ��%d��\n",search(name1,name));
//	}
//	if(search(name1,name) == -1)
//	{
//		printf("����ʧ��\n");
//	}
//	
//
//	return 0;
//}