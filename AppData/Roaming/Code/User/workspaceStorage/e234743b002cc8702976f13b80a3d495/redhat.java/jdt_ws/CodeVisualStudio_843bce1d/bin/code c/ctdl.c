#include <stdio.h>
 
 
void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("  %d  ", a[i][j]);
      printf("\n");
   }
}
void tonghangchan(int a[][100], int m, int n)
{
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 != 0)
            {
                tong += a[i][j];
            }
            
        }
        
    }
    printf(" Tong cac phan tu hang chan = %d \n", tong);
}
void maxcot1(int a[][100], int n, int m)
{
    int max= a[0][0];
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][0]>max)
            {
                max= a[i][0];
            }
            
        }
        
    }
    printf(" so lon nhat cot 1 la = %d \n", max);
}
 
 void max(int a[][100], int n, int m)
{
    int max= a[0][0];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]>max)
            {
                max= a[i][j];
            }
            
        }
        
    }
    printf(" so lon nhat la = %d \n", max);
}

 void minn(int a[][100], int n, int m)
{
    int min= a[0][0];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]<min)
            {
                min= a[i][j];
            }
            
        }
        
    }
    printf(" so nho nhat la = %d \n", min);
}
void cong2matran(int a[][100], int b[100][100], int c[100][100], int m, int n)
{   
    for (int i = 0; i < m; i++)
    {
	    for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b [i][j];
		}
    }
}

int main(){
    int a[100][100],b[100][100],c[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf("%d",&n);
    printf("nhap so cot m = "); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    tonghangchan(a, m, n);
    maxcot1(a,m,n);
    max(a,m,n);
    minn(a,m,n);
    printf("nhap so hang p = "); scanf("%d",&n);
    printf("nhap so cot q = "); scanf("%d",&m);
    printf("nhap vao ma tran 2 \n");
	NhapMaTran(b, m , n);
	cong2matran(a,b,c,m,n);
	printf("\nKet qua cua phep cong hai ma tran la: \n");
	XuatMaTran(c,m,n);
}