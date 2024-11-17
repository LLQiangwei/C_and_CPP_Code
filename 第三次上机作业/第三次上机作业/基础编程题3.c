//#include<stdio.h>
//
//int main()
//{
//	char a[3][80] = {'\0'};
//	int i = 0,j = 0,count = 0;
//
//	scanf("%s",&a[0][0]);
//	scanf("%s",&a[1][0]);
//	scanf("%s",&a[2][0]);
//
//	for(i = 0;i < 3;i++)
//	{
//		for(j = 0;j < 80;j++)
//		{
//			if(a[i][j] >= 'A' && a[i][j] <= 'Z' && a[i][j] != 'A' && a[i][j] != 'E' && a[i][j] != 'I' && a[i][j] != 'O' && a[i][j] != 'U')
//			{
//				count++;
//			}
//			if(a[i][j] == '\0')
//			{
//				break;
//			}
//		}
//	}
//
//	printf("There are %d capital consonant letters in this paper.",count);
//
//	return 0;
//}