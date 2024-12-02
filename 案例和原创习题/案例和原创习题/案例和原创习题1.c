////例题题目：现在，请你编写一个程序，来完成对疫情期间某场所的监控。要求：该程序能够记录出现在该场所的人员名单（假设在100人次以内、且每人的名字小于50个字符）、输入某人名字之后查找该人是否出现在该场所以及出现次数。
//
//#include <stdio.h>
//#include <string.h>
//
//char people[100][50];// 二维字符数组用于存储人员名单
//int count = 0; // 记录当前记录的人数
//
//// 函数声明
//void recordperson(const char* name);
//void findperson(const char* name);
//
//int main() {
//    char name[50];
//    int choice;
//
//    printf("欢迎使用场所人员管控系统！");
//	while (1) 
//	{
//        printf("\n1.记录人员名单\n");
//        printf("2.查找人员\n");
//        printf("3.退出\n");
//        printf("请输入选择：");
//        scanf("%d", &choice);
//
//        switch (choice) 
//		{
//            case 1:
//                printf("请输入人员姓名：");
//                scanf("%s", name);
//                recordperson(name);
//                break;
//            case 2:
//                printf("请输入要查找的人员姓名：");
//                scanf("%s", name);
//                findperson(name);
//                break;
//            case 3:
//                printf("程序退出。\n");
//                return 0;
//            default:
//                printf("无效的选择，请重新输入。\n");
//        }
//    }
//
//    return 0;
//}
//
//// 记录人员名单
//void recordperson(const char* name) 
//{
//    if (count < 100) 
//	{
//        strcpy(people[count], name);
//        count++;
//        printf("%s已记录。\n", name);
//    } else {
//        printf("人员名单已满，无法添加更多人员。\n");
//    }
//}
//
//// 查找人员及其出现次数
//void findperson(const char* name) 
//{
//    int found = 0;
//    int times = 0;
//	int i = 0;
//    for (i = 0; i < count; i++) 
//	{
//        if (strcmp(people[i], name) == 0) 
//		{
//            found = 1;
//            times++;
//        }
//    }
//    if (found) 
//	{
//        printf("%s出现在场所%d次。\n", name, times);
//    } 
//	else 
//	{
//        printf("%s没有出现在场所。\n", name);
//    }
//}