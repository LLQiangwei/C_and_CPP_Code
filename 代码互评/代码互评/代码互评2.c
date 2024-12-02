////字符串连接：试编写一个程序连接两个字符串(不使用库函数strcat())，连接后两个字符串之间加个空格。
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i,j;
//	char str1[100],str2[100],str3[100];
//	printf("The first string:");
//	fgets(str1,100,stdin);
//	str1[strcspn(str1,"\n")] = '\0';
//	printf("The second string:");
//	fgets(str2,100,stdin);
//	str2[strcspn(str2,"\n")] = '\0';
//	for(i = 0;str1[i] != '\0';i++);
//	{
//		str3[i] = str1[i];
//	}
//	str3[i++] = ' ';
//	for(j = 0;str2[j] != '\0';j++)
//	{
//		str3[i + j] = str2[j];
//	}
//	str3[i + j] = '\0';
//	printf("%s",str3);
//}