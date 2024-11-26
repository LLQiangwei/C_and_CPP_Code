//#include<stdio.h>
//
//void value(int a[],int *p1,int *p2, int n)
//{   
//	int i = 0;
//	for(i = 0;i < n;i++)
//	{
//		if(a[i] > *p1)
//		{
//			*p1 = a[i];
//		}
//		if(a[i] < *p2)
//		{
//			*p2 = a[i];
//		}
//	}
//}
//
//void main()
//{   int max=0,min=0,*mx,*mn;
//     int arr[]={1,2,3,-5,0,7,15,4,-8,10};
//     mx=&max,mn=&min;
//     value(arr,mx,mn,10);
//     printf("%d,%d\n",max,min);
//}