//��Ŀ���ݣ���д��������һ���ٷ��Ƴɼ����������Ӧ�ĳɼ��ȼ��� A ������ B ������ C ������ D ������ E ���� (ʹ��switch��䣩
//ת��ԭ��Ϊ��100��90 ��Ϊ��A��,80 �� 89 ��Ϊ��B��,70 �� 79 ��Ϊ��C��,60 �� 69 ��Ϊ��D ��,60 ������Ϊ��E����
//�����ʽ:%f
//�����ʽ��printf("grade:B\n");
//����������85
//���������grade:B
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