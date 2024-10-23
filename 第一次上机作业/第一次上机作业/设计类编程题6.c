//#include<stdio.h>
//
//int main()
//{
//	int input , a , b , c , d , a1 , b1 , c1 , d1 , output;
//	
//	printf("The original number is : ");
//	scanf("%d",&input);
//
//	a = input/1000;
//	b = (input-(a*1000))/100;
//	c = (input-(a*1000+b*100))/10;
//	d = input-(a*1000+b*100+c*10);
//
//	a1 = (a+9)%10;
//	b1 = (b+9)%10;
//	c1 = (c+9)%10;
//	d1 = (d+9)%10;
//
//	output = c1*1000+d1*100+a1*10+b1;
//
//	printf("The encrypted number is %d\n",output);
//
//	return 0;
//}