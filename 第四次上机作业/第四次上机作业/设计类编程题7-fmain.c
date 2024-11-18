//#include<stdio.h>
//#include<string.h>
//
//void delchar(char s[],char c);
//void strreverse(char s[]);
//
//int main()
//{
//	char s[100];
//	char c = 0,data = 0;
//	int choice = 0;
//
//	while(1)
//	{
//		printf("1.Reverse a string.\n2.Delete a character in a string.\nPlease input your choice:");
//		scanf(" %d",&choice);
//
//		printf("Enter a string:");
//		getchar();
//		gets(s);
//		
//		if(choice == 1)
//		{
//			strreverse(s);
//			printf("Reversed string is:%s\n",s);
//		}
//		if(choice == 2)
//		{
//			printf("Enter a character you want to delete:");
//			scanf(" %c",&c);
//			delchar(s,c);
//			printf("Deleted string is:%s\n",s);
//		}
//
//		printf("Would you like to continue?(y/n)");
//		scanf(" %c",&data);
//
//		if(data == 'y' || data == 'Y')
//		{
//			continue;
//		}
//		if(data == 'n' || data == 'N')
//		{
//			break;
//		}
//	}
//
//	return 0;
//}