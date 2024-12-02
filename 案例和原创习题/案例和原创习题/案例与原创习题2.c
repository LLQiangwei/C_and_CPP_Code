//例题题目：现在，请你编写一个程序，输入一个非负整数n，打印出杨辉三角的前n行。

#include <stdio.h>

// 递归函数，计算杨辉三角的第m行第n列的值
long Tri(int m,int n) {
    if (n == 1 || n == m) {
        return 1;
    } else {
        return Tri(m - 1, n - 1) + Tri(m - 1, n);
    }
}

int main() {
    int i = 0,j = 0,n = 0;
    printf("请输入杨辉三角的行数: ");
    scanf("%d", &n);
    
	for (i = 1; i <= n; i++) 
	{
        for (j = 0; j < n - i; j++) 
		{
            printf("   ");
        }
        for (j = 1; j <= i; j++) 
		{
            printf("%6ld", Tri(i,j));
        }
        printf("\n");
    }
    
	return 0;
}