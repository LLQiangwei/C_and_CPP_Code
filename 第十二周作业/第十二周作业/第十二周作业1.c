//��Ŀ���ݣ�����ָ���дһ����������3�����������ɴ�С��˳�����������
//�����ʽ:%d
//�����ʽ��%3d
//����������25 68 17
//���������68 25 17
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0,b = 0,c = 0;
//	int mid = 0;
//	int *pa = &a,*pb = &b,*pc = &c;
//
//	scanf("%d %d %d",&a,&b,&c);
//
//	if(a < b)
//	{
//		mid = *pa;
//		*pa = *pb;
//		*pb = mid;
//	}
//	if(b < c)
//	{
//		mid = *pb;
//		*pb = *pc;
//		*pc = mid;
//	}
//	if(a < b)
//	{
//		mid = *pa;
//		*pa = *pb;
//		*pb = mid;
//	}
//
//	printf("%3d%3d%3d\n",a,b,c);
//
//	return 0;
//}