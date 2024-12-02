////排序：使用起泡法和选择法对10个整数实现递减排序。
////注：10个整数可以通过键盘输入或初始化时复制。
////要求输出：原始数组，经过排序后的数组，以及冒泡法和选择法中变量交换的次数。
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
////	printf("输入十个整数\n");
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
////	printf("原始数组");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr[i]);
////	}
////	printf("\n");
////	printf("冒泡排序后的数组");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr1[i]);
////	}
////	printf("\n");
////	printf("选择排序变量交换的次数是%d\n",a);
////	printf("选择排序后的数组");
////	for(int i = 0;i < 10;i++)
////	{
////		printf("%d ",arr2[i]);
////	}
////	printf("\n");
////	printf("选择排序变量交换的次数是%d\n",a);
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
//	printf("输入十个整数\n");
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
//	printf("原始数组");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("冒泡排序后的数组");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	printf("冒泡排序变量交换的次数是%d\n",a);
//	printf("选择排序后的数组");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");
//	printf("选择排序变量交换的次数是%d\n",b);
//}