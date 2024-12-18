//题目内容：某班有5名同学，建立一个学生的简单信息表，包括学号、姓名、3门课程的成绩，编写程序，计算每名学生的平均成绩及名次。（注：定义一个结构体类型，用结构指针作为函数参数）
//输入格式：%ld %s %f %f %f
//输出格式：%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n
//输入样例：
//201701 zhao 29.8 85.4 65.4
//201702 qian 96.5 87.5 65.4
//201703 sun 85.4 65.4 84.6
//201704 li 63.4 95.4 86.3
//201705 zhou 65.9 84.6 97.5
//输出样例：
//Number:  Name:        score:         Average：     rank:
//201701   zhao      29.8 85.4 65.4     60.2          5
//201702   qian      96.5 87.5 65.4     83.1          1
//201703   sun       85.4 65.4 84.6     78.5          4 
//201704   li        63.4 95.4 86.3     81.7          3
//201705   zhou      65.9 84.6 97.5     82.7          2

#include<stdio.h>

struct stu
{
	long num;
	char name[10];
	float score1;
	float score2;
	float score3;
	float aver;
	int rank;
};

void fun(struct stu* ps)
{
	int i = 0,j = 0;
	float aver[5] = {0};
	float mid = 0;

	for(i = 0;i < 5;i++)
	{
		aver[i] = ps[i].aver;
	}

	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 4 - i;j++)
		{
			if(aver[j] > aver[j + i])
			{
				mid = aver[j];
				aver[j] = aver[j + 1];
				aver[j + 1] = mid;
			}
		}
	}

	for(i = 0; i < 5; i++)
    {
        ps[i].rank = 1;
        for(j = 0; j < 5; j++)
        {
            if(aver[j] > ps[i].aver)
            {
                ps[i].rank++;
            }
        }
    }

	printf("Number:  Name:        score:       Average：  rank:\n");
	for(i = 0;i < 5;i++)
	{
		printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n",ps[i].num,ps[i].name,ps[i].score1,ps[i].score2,ps[i].score3,ps[i].aver,ps[i].rank);
	}
}

int main()
{
	struct stu s[5];
	struct stu* ps = s;
	int i = 0;

	for(i = 0;i < 5;i++)
	{
		scanf("%ld %s %f %f %f",&s[i].num,&s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
		s[i].aver = (s[i].score1 + s[i].score2 + s[i].score3) / 3;
	}

	fun(ps);

	return 0;
}