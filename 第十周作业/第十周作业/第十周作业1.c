//��Ŀ���ݣ���д��x��n�η��ĵݹ麯���������������ò������(xΪdouble�ͣ�nΪ���ͣ���������Ϊdouble�ͣ�
//�����ʽ:%lf%d
//�����ʽ��%f
//����������4 3
//���������64.000000
//
//#include<stdio.h>
//
//double di_gui(double x,int n)
//{
//	if(n == 0)
//	{
//		return 1;
//	}
//	else if(n < 0)
//	{
//		return 1 / di_gui(x,-n);
//	}
//	else
//	{
//		return x * di_gui(x,n - 1);
//	}
//}
//
//int main()
//{
//	double x = 0;
//	int n = 0;
//
//	scanf("%lf%d",&x,&n);
//	printf("%f\n",(float)di_gui(x,n));
//
//	return 0;
//}