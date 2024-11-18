//#include<stdio.h>
//
//int encrypt(int n)
//{
//	int a[4] = {0};
//	int i = 0,ten = 1000,mid = 0,sum = 0;
//
//	for(i = 0;i < 4;i++)
//	{
//		a[i] = n / ten;
//		n -= a[i] * ten;
//		a[i] = (a[i] + 9) % 10;
//		ten /= 10;
//	}
//
//	mid = a[0];
//	a[0] = a[2];
//	a[2] = mid;
//	mid = a[1];
//	a[1] = a[3];
//	a[3] = mid;
//
//	ten = 1000;
//	for(i = 0;i < 4;i++)
//	{
//		sum += a[i] * ten;
//		ten /= 10;
//	}
//
//	return sum;
//}
//
//int decrypt(int n)
//{
//	int a[4] = {0};
//	int i = 0,ten = 1000,mid = 0,sum = 0;
//	
//	for(i = 0;i < 4;i++)
//	{
//		a[i] = n / ten;
//		n -= a[i] * ten;
//		ten /= 10;
//	}
//
//	mid = a[0];
//	a[0] = a[2];
//	a[2] = mid;
//	mid = a[1];
//	a[1] = a[3];
//	a[3] = mid;
//
//	ten = 1000;
//	for(i = 0;i < 4;i++)
//	{
//		a[i] = a[i] + 1;
//		sum += a[i] * ten;
//		ten /= 10;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d",&n);
//	n = encrypt(n);
//	printf("The encrypted number is %4d\n",n);
//	
//	scanf("%d",&n);
//	n = decrypt(n);
//	printf("The decrypted number is %4d\n",n);
//	
//	return 0;
//}