//��Ŀ���ݣ���д�������������������һ��������ת��Ϊǧ��λ�ָ����ַ���ʽ�����������е��ò������
//�����ʽ��%d
//�����ʽ��%c �� putchar()
//����������123456
//���������123,456
//
//#include<stdio.h>
//
//void f(int num)
//{
//	int check = 0;
//	int lenth  = 0,mid = num;
//	int i = 0,j = 0,digit = 0,ten = 1,mid1 = 0;
//	
//	if(num < 0)
//	{
//		check = 1;
//		num = -num;
//	}
//
//	while(mid > 0)
//	{
//		lenth++;
//		mid /= 10;
//	}
//
//	mid = num;
//	mid1 = lenth;
//	for(i = lenth;i > 0;i--)
//	{
//		ten = 1;
//		for(j = mid1 - 1;j > 0;j--)
//		{
//			ten *= 10;
//		}
//		mid1--;
//
//		digit = mid / ten;
//		putchar(digit + '0');
//		mid -= digit * ten;
//		
//		if((i - 1) % 3 == 0 && i != 1)
//		{
//			putchar(',');
//		}
//	}
//
//	if(check)
//	{
//		putchar('-');
//	}
//}
//
//int main()
//{
//	int num = 0;
//    scanf("%d",&num);
//	f(num);
//
//	return 0;
//}