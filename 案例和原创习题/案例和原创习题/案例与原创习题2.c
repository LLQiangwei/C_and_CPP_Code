//������Ŀ�����ڣ������дһ����������һ���Ǹ�����n����ӡ��������ǵ�ǰn�С�

#include <stdio.h>

// �ݹ麯��������������ǵĵ�m�е�n�е�ֵ
long Tri(int m,int n) {
    if (n == 1 || n == m) {
        return 1;
    } else {
        return Tri(m - 1, n - 1) + Tri(m - 1, n);
    }
}

int main() {
    int i = 0,j = 0,n = 0;
    printf("������������ǵ�����: ");
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