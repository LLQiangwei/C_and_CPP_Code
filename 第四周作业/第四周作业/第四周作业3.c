//题目内容：编写程序，输入一个百分制成绩，输出所对应的成绩等级“ A ”、“ B ”、“ C ”、“ D ”、“ E ”。 (使用switch语句）
//转换原则为：100～90 分为“A”,80 ～ 89 分为“B”,70 ～ 79 分为“C”,60 ～ 69 分为“D ”,60 分以下为“E”。
//输入格式:%f
//输出格式：printf("grade:B\n");
//输入样例：85
//输出样例：grade:B
//
//#include<stdio.h>
//
//int main()
//{
//	float input = 0;
//	int level = 0;
//
//	scanf("%f",&input);
//	input = (int)input;
//	
//	if(input >= 90 && input <= 100)
//	{
//		level = 5;
//	}
//	
//	if(input >= 80 && input <= 89)
//	{
//		level = 4;
//	}
//
//	if(input >= 70 && input <= 79)
//	{
//		level = 3;
//	}
//
//	if(input >= 60 && input <= 69)
//	{
//		level = 2;
//	}
//
//	if(input < 60)
//	{
//		level = 1;
//	}
//
//	switch(level)
//	{
//		case 5:
//			printf("grade:A\n");
//			break;
//		case 4:
//			printf("grade:B\n");
//			break;
//		case 3:
//			printf("grade:C\n");
//			break;
//		case 2:
//			printf("grade:D\n");
//			break;
//		case 1:
//			printf("grade:E\n");
//			break;
//	}
//
//	return 0;
//}