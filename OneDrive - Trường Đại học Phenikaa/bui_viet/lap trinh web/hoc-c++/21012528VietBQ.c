//---------------------------------- bai 2

#include <stdio.h>
#include<string.h>
typedef struct khachhang {
        int  mch;
        char ten[100];
        int thanhvien, sodien;
    }kh;
void nhap( kh danhsach[], int n)
{
    for (int i=0; i<n;i++)
    {
        getchar();
        printf("nhap ma can ho  ");
        do
        {
            // gets(danhsach[i].mch);
            getchar();
            scanf("%d",&danhsach[i].mch);
        }while ( danhsach[i].mch < 999 || danhsach[i].mch >10000 );

        printf("nhap ten chu ho ");
        do
        {
            gets(danhsach[i].ten);
            getchar();
        }while (strlen(danhsach[i].ten)>30);
  
        printf("nhap so thanh vien ");
        do
        {
            scanf("%d",&danhsach[i].thanhvien); getchar();
        }while (danhsach[i].thanhvien<0);

        printf("nhap so dien");
        do 
        {
            scanf("%d",&danhsach[i].sodien);getchar();
        }while (danhsach[i].sodien<=0);
    }
}
void sapxep(kh danhsach[],int n)
{

}
void xuat (kh danhsach[],int n)
{
    printf("+-----+------+---------------+---------------+-----------+\n");
    printf("| STT | ma Ch|    Ten chu ho | so thanh vien | so dien |\n");
    for ( int i=0;i<n;i++)
    {
        printf("|%-4d|%-6d|%-15s|%-15d|%-9d|\n",i+1,danhsach[i].mch,danhsach[i].ten,danhsach[i].thanhvien,danhsach[i].sodien);
        printf("+-----+------+---------------+---------------+-----------+\n");
    }

}

int main ()
{
    int n;
    printf("nhap so  nguoi dung ");
    scanf(" %d",&n);
    // getchar();
    kh danhsach[n];
    nhap(danhsach,n);
    xuat(danhsach,n);
    sapxep(danhsach,n);


   
}

// ------------------------------ bai 1
// #include<stdio.h>
// void nhap (int a[], int n)
// {
//     int max ;
//     for (int i=0; i<n;i++)
//     {
//         printf("nhap phan tu thu a[%d]  ",i);
//         scanf("%d",&a[i]);
//         getchar();
//     }
//     for (int i=0;i<n;i++)
//     {
//         max =a[0];
//         if (a[i]>max)
//         {
//             max =a[i];
//         }
//     }
//     printf("%d\n",max);
// }
// void dem(int a[], int n,int x)
// {
//     int dem = 0;
//     for (int i=0;i<n;i++)
//     {
//         if (a[i]==x)
//         {
//             dem++;
//         }
//     }
//     printf("%d",dem);
// }

// int main ()
// {
//     int n;
// do
// {
// scanf("%d",&n);
// getchar();
// }while (n<0||n>100);
//     
//     int a[n];
//     nhap(a,n);

//     int x;
//     printf("nhap x ");
//     scanf("%d",&x);
//     dem(a,n,x);
// }