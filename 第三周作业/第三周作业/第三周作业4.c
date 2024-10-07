//题目内容：编写程序，从键盘输入银行存款金额(money)、存款周期(year)和年利率(rate)，根据下面公式计算存款到期时的本息合计（sum)，并输出本息合计金额（要求保留2位小数）。
//计算公式：sum=money*(1+rate)^year
//提示：程序需要包含数学头函数库。money、year使用整型变量，sum、rate使用双精度实型变量。
//输入格式:%d%d%lf
//输出格式：%7.2f
//输入样例：1000 3 0.025
//输出样例：sum=1076.89
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int money = 0,year = 0;
//	double sum = 0,rate = 0, a = 0,b = 0;
//	scanf("%d%d%lf",&money,&year,&rate);
//    b = 1+rate;
//	a = pow(b,year);
//	sum = money*a;
//
//	printf("sum=%7.2f",sum);
//
//	return 0;
//}