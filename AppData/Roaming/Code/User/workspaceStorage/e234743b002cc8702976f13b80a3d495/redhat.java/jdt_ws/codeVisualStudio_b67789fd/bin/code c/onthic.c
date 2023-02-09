// bai1 tinh tong 2 ma tran
// #include<stdio.h>
// void nhap(int m,int n ,int a[m][n])
// {
//  int i=0,j=0;
//     do
//     {
//         do
//         {
//             printf("nhap phan tu a[%d][%d] ",i,j);
//             scanf(" %d ",&a[i][j]);
//             j++;
//         }while (j<n);
//         j=0;
//         i++;
//     }while(i<m);
// }

// void xuat2(int m,int n, int a[m][n])
// {
//     int i=0,j=0;
//     do
//     {
//         do
//         {
//             printf("%d ",a[i][j]);
//             j++;
//         }while (j<n);
//         j=0;
//         printf("\n");
//         i++;
//     }while(i<m);
    
// }

// int soNguyenTo(int soA)
// {
//     if (soA < 2)    
//         return 0;
//     for (int e = 2; e <soA; e++)
//     {
//         if (soA%e==0)
//             return 0;
//     }
//     return 1;
// }
// void songuyento(int m, int n, int a[m][n])
// {
//     int dem=0;
//     for (int i=0; i<m;i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (soNguyenTo(a[i][j])==1)
//                 {
//                     printf("phan tu a[%d][%d]= %d la so nguyen to\n",i,j,a[i][j]);
//                     dem++;
//                 }
//         }
//     }
//     if (dem==0)
//     {
//         printf("khong co phan tu nao cua mang la so nguyen to ");
//     }
// }


// int main () 
// {
//     int n,m;
//     do {
//     printf("nhap m n ");
//     scanf(" %d %d",&m,&n);
//     }while (m>11||n>11);
//     int a[m][n];
//     nhap(m,n,a);
//     xuat2(m,n,a);
//     songuyento(m,n,a);
// }


// // }

// // bai 2 
// // #include<stdio.h>
// // #include<string.h>
// // typedef struct sinhvien
// // {
// //     char ten[100], quequan[100];
// //     int msv;
// //     float chieucao,cannang;
// // }sv;

// // void nhap(sv ds[], int n)
// // {
// //     for (int i=1;i<=n;i++)
// //     {
// //         getchar();
// //         printf("nhap ten sinh vien so %d: ",i);
// //     do 
// //     {
// //         gets(ds[i].ten);
// //     }while (strlen(ds[i].ten)>30);

// //     printf("nhap que quan sinh vien so %d: ",i);
// //     do 
// //     {
// //         gets(ds[i].quequan);
// //     }while (strlen(ds[i].quequan)>20);

// //     printf("nhap ma so sinh vien so %d: ",i);
// //     do
// //     {
// //         scanf("%d",&ds[i].msv);
// //         getchar();
// //     }while ( ds[i].msv >999 || ds[i].msv <100 );

// //     printf("nhap chieu cao sinh vien so %d: ",i);
// //     scanf("%f",&ds[i].chieucao);
// //     getchar();
// //     printf("nhap can nang sinh vien so %d: ",i);
// //     scanf("%f",&ds[i].cannang);
// //     }
// // }
// // void xuat(sv ds[], int n)
// // {
// //     printf("+-----+------+-----------------+----------+-----------+----------+\n"); 
// //     printf("| STT | MaSV |       Ho va Ten | Que quan | Chieu cao | Can nang |\n"); 
// //     printf("+-----+------+-----------------+----------+-----------+----------+\n");
// //     for(int i=1; i<=n;i++)
// //     {
// //         printf("|%-3d  |%-2d   |%-17s|%-10s|%-11.2f|%-10.2f|\n", i,ds[i].msv,ds[i].ten,ds[i].quequan,ds[i].chieucao,ds[i].cannang);
// //         printf("+-----+------+-----------------+----------+-----------+----------+\n");
// //     }
// // }
// // void sapxep(sv ds[],int n)
// // {
    
// //     for (int i=1;i<=n;i++)
// //     {
// //         for (int j=i;j<=n;j++)
// //         {
// //              if(ds[i].chieucao<ds[j].chieucao){
// //                 sv t = ds[i];
// //                 ds[i]=ds[j];
// //                 ds[j]=t;
// //             }
// //         }
// //         printf("|%-3d  |%-2d   |%-17s|%-10s|%-11.2f|%-10.2f|\n", i,ds[i].msv,ds[i].ten,ds[i].quequan,ds[i].chieucao,ds[i].cannang);
// //         printf("+-----+------+-----------------+----------+-----------+----------+\n");
// //     }
// // }
// // int main ()
// // {
// //     int n;
// //     scanf("%d",&n); 
// //     sv ds[n];
// //     nhap(ds,n);
// //     xuat(ds,n);
// //     printf("sap xep lai \n");
// //     sapxep(ds,n);
// // }



// #include<stdio.h>
// #include<string.h>

// typedef struct hocvien{
//     char hoten[100];
//     int gioitinh;
//     float diem_py,diem_c;
//     float diemtb;
//     char kq[10];

// }HV;

// void nhaplieu(HV danhsach[],int size){
 
//     for(int i=0;i<size;i++){
//         printf("nhap ten hoc vien %d: ",i+1);
//         gets(danhsach[i].hoten);
//         printf("Nhap gioi tinh nam nhap 0, nu nhap 1: ");
//         scanf("%d",&danhsach[i].gioitinh);
//         getchar();
//         printf("nhap diem python: ");
//         scanf("%f",&danhsach[i].diem_py);
//         getchar();
//         printf("nhap diem C: ");
//         scanf("%f",&danhsach[i].diem_c);
//         getchar();
//         danhsach[i].diemtb=(danhsach[i].diem_c*2 + danhsach[i].diem_py)/3.0;

//     }
// }


// void ketqua(HV danhsach[],int size){
//     for(int i=0;i<size;i++){
//         if(danhsach[i].diemtb >=5){
//             strcpy(danhsach[i].kq,"Dau");
//         }
//         else if(danhsach[i].diemtb<5&&danhsach[i].gioitinh==0){
//             strcpy(danhsach[i].kq,"Truot");
//         }
//         else if(danhsach[i].diemtb<5&&danhsach[i].gioitinh==1){
//             strcpy(danhsach[i].kq,"Truot");
//         }
//     }
// }

// void intatca(HV danhsach[],int size){
//     printf("danh sach cac hoc vien\n");
//          for(int i=0;i<size;i++){
//          printf("| %-20s| %-4d| %-8f| %-8f| %-8.2f|%6s|\n",danhsach[i].hoten,danhsach[i].gioitinh,danhsach[i].diem_py,danhsach[i].diem_c,danhsach[i].diemtb,danhsach[i].kq);
//          }
// }

// void inthongtin(HV a){
//      printf("| %-20s| %-4d| %-8f| %-8f| %-8.2f|%6s|\n",a.hoten,a.gioitinh,a.diem_py,a.diem_c,a.diemtb,a.kq);
// }

// void sapxep(HV danhsach[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;++j){
//            if(danhsach[i].diemtb < danhsach[j].diemtb){
//                HV temp=danhsach[i];
//                danhsach[i]=danhsach[j];
//                danhsach[j]=temp;
//            }
//         }
//     }
// }

// void indau(HV danhsach[],int n){
//     for(int i=0;i<n;i++){
//         if(strcmp(danhsach[i].kq,"Dau")==0){
//             printf("in nhung ban dau!!!\n");
//             inthongtin(danhsach[i]);
//         }
//     }
// }

// void intruot(HV danhsach[],int n){
//     for(int i=0;i<n;i++){
//         if(strcmp(danhsach[i].kq,"Truot")==0){
//             printf("in nhung ban truot!!!\n");
//             inthongtin(danhsach[i]);
//         }
//     }
// }

// void timkiemten(HV danhsach[],int n){
//     char b[20];
//     printf("nhap ten can tim kiem: ");
//     gets(b);
//     for(int i=0;i<n;i++){
//         if(strcmp(danhsach[i].hoten,b)==0){
//             inthongtin(danhsach[i]);
//         }
//     }
// }

// int main(){
//     int n;
//     printf("Nhap so hoc vien: ");
//     do{
//         scanf("%d",&n);
//         getchar();
//     }while (n<0);
//     HV danhsach[n];
//     nhaplieu(danhsach,n);
//     ketqua(danhsach,n);
//     sapxep(danhsach,n);
//     indau(danhsach,n);
//     intruot(danhsach,n);
//     timkiemten(danhsach,n);
//     intatca(danhsach,n);
    

//     return 0;
// }


#include<stdio.h>
#include<string.h>

void nhap(int n,int m, int a[n][m],int b[n][m])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
        printf("nhap so phan tu a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("-----------------------\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
        printf("nhap so phan tu b[%d][%d]",i,j);
        scanf("%d",&b[i][j]);
        }
    }
}

void inmatran (int n,int m,int a[n][m],int b[n][m])
{
    printf("ma tran a :\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("ma tran b :\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
void tinhtong(int n, int m, int a[n][m],int b[n][m],int c[n][m])
{
    printf("tong ma tran a va b :\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }

}



int main ()
{
    int n,m;
    printf("nhap so hang so cot ");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],c[n][m];
    nhap(n,m,a,b);
    inmatran(n,m,a,b);
    tinhtong(n,m,a,b,c);


}