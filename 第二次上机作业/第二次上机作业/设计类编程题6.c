//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 0,b = 0,answer = 0,data = 0,input = 0;
//	char fuhao;
//
//	a = rand() % 10;
//	b = rand() % 10;
//	data = rand() % 4;
//
//	if(b == 0)
//	{
//		data = rand() % 3;
//	}
//
//	switch(data)
//	{
//		case 0:fuhao = '+';
//			printf("%d%c%d=",a,fuhao,b);
//			scanf("%d",&input);
//			answer = a + b;
//			if(answer == input)
//			{
//				printf("Correct!\n");
//			}
//			else
//			{
//				printf("Wrong!\n");
//			}
//			break;
//		case 1:fuhao = '-';
//			printf("%d%c%d=",a,fuhao,b);
//			scanf("%d",&input);
//			answer = a - b;
//			if(answer == input)
//		    {
//			printf("Correct!\n");
//			}
//			else
//			{	
//				printf("Wrong!\n");
//			}
//			break;
//		case 2:fuhao = '*';
//			printf("%d%c%d=",a,fuhao,b);
//			scanf("%d",&input);
//			answer = a * b;
//			if(answer == input)
//			{
//				printf("Correct!\n");
//		    }
//			else
//			{
//				printf("Wrong!\n");
//			}break;
//		case 3:fuhao = '/';
//			printf("%d%c%d=",a,fuhao,b);
//			scanf("%d",&input);
//			answer = a / b;
//			if(answer == input)
//			{
//				printf("Correct!\n");
//			}
//			else
//			{
//				printf("Wrong!\n");
//			}
//			break;
//	}
//
//	return 0;
//}