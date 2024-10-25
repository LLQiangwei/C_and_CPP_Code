//#include<stdio.h>
//
//float f(float x)
//{
//	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
//}
//
//int main()
//{
//	float a = 0 , b = 0 , root = 0  , y1 = 0 , y2 = 0 , mid = 0 , data = 0;
//
//	while(data == 0)
//	{
//		printf("Please input the lower and upper boundaries: ");
//		scanf("%f %f",&a,&b);
//		
//		while(root == 0)
//		{
//			y1 = f(a);
//			y2 = f(b);
//			
//			if(y1 * y2 > 0)
//			{
//				printf("No root in this boundary!\n");
//				break;
//			}
//
//			if(y1 == 0)
//			{
//				root = a;
//				data++;
//				break;
//			}
//
//			if(y2 == 0)
//			{
//				root = b;
//				data++;
//				break;
//			}
//
//			if(y1 * y2 < 0)
//			{
//				data++;
//				
//				mid = (a + b) / 2.0;
//				if(f(a) * f(mid) < 0)
//				{
//					b = mid;
//				}
//				else
//				{
//					a = mid;
//				}
//			}
//		}
//	}
//	
//	if(root != 0)
//	{
//		printf("The root is %.2f\n",root);
//	}
//
//	return 0;
//}