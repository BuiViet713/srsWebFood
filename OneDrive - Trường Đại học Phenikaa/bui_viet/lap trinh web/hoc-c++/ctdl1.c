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
void sapxephang2(int a[][100], int m, int n)
{
   for(int k = 0; k<m ; k++)
      for(int i = 0; i<n-1 ; i++)
      for(int j = n-1; j>i ; j--)
      if(a[k][j]<a[k][j-1])
      {
         int temp = a[k][j];
         a[k][j] = a[k][j-1];
         a[k][j-1] = temp;
      }
}

int main(){
    int a[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf("%d",&n);
    printf("nhap so cot m = "); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    printf("ma tran a ban dau\n");
    XuatMaTran(a, m, n);
    printf("ma tran a sau khi sap xep \n");
    sapxephang2(a,m,n);
    XuatMaTran(a,m,n);
    
}