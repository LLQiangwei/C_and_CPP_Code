////����ʹ�����ݷ���ѡ�񷨶�10������ʵ�ֵݼ�����
////ע��10����������ͨ������������ʼ��ʱ���ơ�
////Ҫ�������ԭʼ���飬�������������飬�Լ�ð�ݷ���ѡ���б��������Ĵ�����
//
////#include<stdio.h>
////
////void swap(int* a,int* b)
////{
////	int t = *a;
////	*a = *b;
////	*b = t;
////}
////
////int A(int arr[],int n)
////{
////	int a = 0;
////	
////	for(int i = 0;i < n - 1;i++)
////	{
////		for(int j = 0;j < n - i - 1;j++)
////		{
////			if(arr[j] < arr[j + 1])
////			{
////				swap(&arr[j],&arr[j + 1]);
////				a++;
////			}
////		}
////	}
////
////	return n;
////}
////
////int B(int arr[],int n)
////{
////	int b = 0;
////	
////	for(int i = 0;i < n - 1;i++)
////	{
////		int max = i;
////		for(int j = i + 1;j < n;j++)
////		{
////			if(arr[j] > arr[max])
////			{
////				max = j;
////			}
////		}
////	}
////
////	if(max != i)
////	{
////		swap(&arr[max],&arr[i]);
////		b++;
////	}
////
////	return b;
////}
////
////int main()
////{
////	int arr[10];
////	printf("����ʮ������\n");
////	for(int i = 0;i < 10;i++)
////	{
////		scanf("%d",&arr[i]);
////	}
////
////	int arr1[10],arr2[10];
////	for(int i = 0;i <10;i++)
////	{
////		arr1[i] = arr2[i] = arr[i];
////	}
////
////	int a = A(arr1,10);
////	int b = B(arr2,10);
////
////	printf("ԭʼ����");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr[i]);
////	}
////	printf("\n");
////	printf("ð������������");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr1[i]);
////	}
////	printf("\n");
////	printf("ѡ��������������Ĵ�����%d\n",a);
////	printf("ѡ������������");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr2[i]);
////	}
////	printf("\n");
////	printf("ѡ��������������Ĵ�����%d\n",a);
////}
//
//#include<stdio.h>
//
//void swap(int* a,int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int A(int arr[],int n)
//{
//	int a = 0,i= 0,j = 0;
//	
//	for(i = 0;i < n - 1;i++)
//	{
//		for(j = 0;j < n - i - 1;j++)
//		{
//			if(arr[j] < arr[j + 1])
//			{
//				swap(&arr[j],&arr[j + 1]);
//				a++;
//			}
//		}
//	}
//
//	//return n;
//	return a;
//}
//
//int B(int arr[],int n)
//{
//	int b = 0,i = 0,j = 0,max = 0;
//	
//	for(i = 0;i < n - 1;i++)
//	{
//		max = i;
//		for(j = i + 1;j < n;j++)
//		{
//			if(arr[j] > arr[max])
//			{
//				max = j;
//			}
//		}
//
//		if(max != i)
//		{
//			swap(&arr[max],&arr[i]);
//			b++;
//		}
//	}
//	return b;
//}
//
//int main()
//{
//	int arr[10],arr1[10],arr2[10];
//	int i = 0,a = 0,b = 0;
//	printf("����ʮ������\n");
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//	//}
//	//
//	//for(i = 0;i <10;i++)
//	//{
//	//	arr1[i] = arr2[i] = arr[i];
//	//}
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//		arr1[i] = arr2[i] = arr[i];
//	}
//	
//	a = A(arr1,10);
//	b = B(arr2,10);
//
//	printf("ԭʼ����");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("ð������������");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	printf("ð��������������Ĵ�����%d\n",a);
//	printf("ѡ������������");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");
//	printf("ѡ��������������Ĵ�����%d\n",b);
//}