//题目内容：某班有10名同学，建立学生结构体类型，包括学号、姓名、3门课程的成绩，编写程序，读入已准备好的文本文件student1.txt，为结构体数组变量赋值，计算每名学生的平均成绩及名次。结果输出到屏幕的同时保存到student2.txt文件中。将源程序作为答案提交，程序运行后将生成的student2.txt文件作为附件上传。
//（该作业不计入课程总成绩。student1.txt已提供，直接从附件下载）

#include<stdio.h>

struct student
{
	long num;
	char name[10];
	float score1;
	float score2;
	float score3;
	float aver;
	int rank;
};

void aver(struct student* ps);
void rank(struct student* ps);

int main()
{
	struct student stu[10];
	struct student* ps = stu;
	int i = 0;
	FILE *pf1,*pf2;

	pf1 = fopen("student1.txt","r");
	if(pf1 == NULL)
	{
		perror("fopen");
		return 1;
	}

	pf2 = fopen("student2.txt","w");
	if(pf2 == NULL)
	{
		perror("fopen");
		return 1;
	}

	for(i = 0;i < 10;i++)
	{
		fscanf(pf1,"%ld %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].score3);
	}

	aver(ps);
	rank(ps);

	for(i = 0;i < 10;i++)
	{
		printf("%ld %s %.1f %.1f %.1f %.1f %d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].aver,stu[i].rank);
		fprintf(pf2,"%ld %s %.1f %.1f %.1f %.1f %d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].aver,stu[i].rank);
	}

	fclose(pf1);
	pf1 = NULL;
	fclose(pf2);
	pf2 = NULL;
	
	return 0;
}

void aver(struct student* ps)
{
	int i = 0;
	float aver = 0;

	for(i = 0;i < 10;i++)
	{
		ps[i].aver = (ps[i].score1 + ps[i].score2 + ps[i].score3) / 3;
	}
}

void rank(struct student* ps)
{
	float max = ps[0].aver;
	int i = 0,j = 0;
	float mid = 0;
	float aver[10] = {0};
	
	for(i = 0;i < 10;i++)
	{
		aver[i] = ps[i].aver;
	}
	
	for(i = 0;i < 9;i++)
	{
		for(j = 0;j < 9 - i;j++)
		{
			if(aver[j] < aver[j + 1])
			{
				mid = aver[j];
				aver[j] = aver[j + 1];
				aver[j + 1] = mid;
			}
		}
	}

	for(i = 0;i < 10;i++)
	{
		ps[i].rank = 1;
		for(j = 0;j < 10;j++)
		{
			if(ps[i].aver < aver[j])
			{
				ps[i].rank++;
			}
		}
	}

}