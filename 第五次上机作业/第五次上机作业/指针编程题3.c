//#include<stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void sort(char *s[])
//{
//	int i = 0,j = 0;
//	char *mid;
//
//	for(i = 0;i < 9;i++)
//	{
//		for(j = 0;j <= i;j++)
//		{
//			
//			if(strcmp(s[j], s[j + 1]) > 0)
//			{
//				mid = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = mid;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char *s[10];
//	int i = 0;
//
//	for (i = 0; i < 10; i++) 
//	{
//        s[i] = (char *)malloc(101 * sizeof(char)); 
//    }
//
//	printf("ÇëÊäÈë10¸ö×Ö·û´®£º\n");
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%s",s[i]);
//	}
//
//	sort(s);
//
//	printf("\nÅÅÐòºóµÄ×Ö·û´®Îª£º\n");
//	for(i = 0;i < 10;i++)
//	{
//		printf("%s\n",s[i]);
//	}
//
//	for(i = 0;i < 10;i++)
//	{
//		free(s[i]);
//	}
//
//	return 0;
//}