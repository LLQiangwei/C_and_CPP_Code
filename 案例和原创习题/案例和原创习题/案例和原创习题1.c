////������Ŀ�����ڣ������дһ����������ɶ������ڼ�ĳ�����ļ�ء�Ҫ�󣺸ó����ܹ���¼�����ڸó�������Ա������������100�˴����ڡ���ÿ�˵�����С��50���ַ���������ĳ������֮����Ҹ����Ƿ�����ڸó����Լ����ִ�����
//
//#include <stdio.h>
//#include <string.h>
//
//char people[100][50];// ��ά�ַ��������ڴ洢��Ա����
//int count = 0; // ��¼��ǰ��¼������
//
//// ��������
//void recordperson(const char* name);
//void findperson(const char* name);
//
//int main() {
//    char name[50];
//    int choice;
//
//    printf("��ӭʹ�ó�����Ա�ܿ�ϵͳ��");
//	while (1) 
//	{
//        printf("\n1.��¼��Ա����\n");
//        printf("2.������Ա\n");
//        printf("3.�˳�\n");
//        printf("������ѡ��");
//        scanf("%d", &choice);
//
//        switch (choice) 
//		{
//            case 1:
//                printf("��������Ա������");
//                scanf("%s", name);
//                recordperson(name);
//                break;
//            case 2:
//                printf("������Ҫ���ҵ���Ա������");
//                scanf("%s", name);
//                findperson(name);
//                break;
//            case 3:
//                printf("�����˳���\n");
//                return 0;
//            default:
//                printf("��Ч��ѡ�����������롣\n");
//        }
//    }
//
//    return 0;
//}
//
//// ��¼��Ա����
//void recordperson(const char* name) 
//{
//    if (count < 100) 
//	{
//        strcpy(people[count], name);
//        count++;
//        printf("%s�Ѽ�¼��\n", name);
//    } else {
//        printf("��Ա�����������޷���Ӹ�����Ա��\n");
//    }
//}
//
//// ������Ա������ִ���
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
//        printf("%s�����ڳ���%d�Ρ�\n", name, times);
//    } 
//	else 
//	{
//        printf("%sû�г����ڳ�����\n", name);
//    }
//}