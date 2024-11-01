//#include<stdio.h>
//
//int main()
//{
//	char a[100000],b[100000];
//	int m,n,lena,check;
//
//	while(scanf("%s %s",a,b) != EOF)
//	{
//		
//		m = 0;n = 0;lena = 0;check = 0;
//		
//		for(lena = 0;;lena++)
//		{
//			if(a[lena] == '\0')
//			{
//				break;
//			}
//		}
//	
//		for(m = 0;m < 100000;m++)
//		{
//			while(n < 100000)
//			{
//				if(b[n] == a[m])
//				{
//					check++;
//					break;
//				}
//				n++;
//			}
//
//			if(a[m + 1] == '\0')
//			{
//				break;
//			}
//		}
//
//		if(check == lena)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main() 
{
    char a[100000], b[100000];
    int i, j, len_a, len_b;

    while (scanf("%s %s", a, b) != EOF) 
	{
        len_a = strlen(a);
        len_b = strlen(b);

        i = 0, j = 0;
        while (i < len_a && j < len_b) 
		{
            if (a[i] == b[j])
			{
                i++;
            }
            j++;
        }

        if (i == len_a) 
		{
            printf("Yes\n");
        } else 
		{
            printf("No\n");
        }
    }

    return 0;
}
