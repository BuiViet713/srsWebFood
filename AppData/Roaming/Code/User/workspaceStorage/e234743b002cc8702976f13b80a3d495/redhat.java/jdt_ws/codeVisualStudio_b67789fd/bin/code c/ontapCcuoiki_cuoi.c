// #include <stdio.h>  
// void nhap(int n,float a[n][n],float b[n][n]){
//     int i=0;
//     int j=0;
//     do{
//         do{
//             scanf("%f",&a[i][j]); 
//             j++;
//         }while(j<n); 
//         j=0;
//         i++;
//     }while(i<n);
//     i=0;
//     j=0;
//     do{
//         do{
//             scanf("%f",&b[i][j]); 
//             j++;
//         }while(j<n);
//         j=0;
//         i++;
//     }while(i<n);
// }
// void cong_matran(int n,float a[n][n],float b[n][n],float tong[n][n]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             tong[i][j]=a[i][j]+b[i][j];
//         }
//     } 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%.2f ",tong[i][j]); 
//         } 
//         printf("\n"); 
//     } 
// }
// int main(){ 
//     int n;
//     scanf("%d",&n);
//     float a[n][n], b[n][n];
//     float tong[n][n];
//     nhap(n,a,b);
//     cong_matran(n,a,b,tong);
// }

// #include <stdio.h>  
// #include <string.h> 
// typedef struct sinhvien{
//     char ten[100],quequan[100];
//     int masosinhvien;
//     float chieucao,cannang;
// }sv;
// void nhap(sv danhsach[],int n){
//     for(int i=0;i<n;i++){
//         getchar();
//         printf("Nhap ten: "); 
//             do{
//                 gets(danhsach[i].ten);
//             }while(strlen(danhsach[i].ten)>30);
//         printf("    Nhap que quan: "); 
//             do{
//                 gets(danhsach[i].quequan);
//             }while(strlen(danhsach[i].quequan)>20);
//         printf("    Nhap ma so sinh vien: "); 
//             do{
//                 scanf("%d",&danhsach[i].masosinhvien); 
//             }while(danhsach[i].masosinhvien<100 || danhsach[i].masosinhvien > 999);
//             //2 trường hợp mình dùng getchar();
//             //1.trc gets mà có scanf.
//             //2.trc scanf("%c",&);  mà có bất kì 1 hàm nhập khác.
//         printf("    Nhap chieu cao: "); 
//             scanf("%f",&danhsach[i].chieucao);
//         printf("    Nhap can nang: "); 
//             scanf("%f",&danhsach[i].cannang);
//     }
// }
// //in ra các sinh vien có quê là Hà Lội
// void sv_hanoi(sv danhsach[],int n){
//     for(int i=0;i<n;i++){
//         if(strcmp(danhsach[i].quequan,"HaNoi")==0){
//             printf("| %3d | %4d | %15s | %8s | %9.2f | %8.2f |\n"
//                 ,i+1,
//         danhsach[i].masosinhvien,
//         danhsach[i].ten,
//         danhsach[i].quequan,
//         danhsach[i].chieucao,
//         danhsach[i].cannang); 
//         }
//     } 
// }
// void inra(sv danhsach[],int n){
//     printf("+-----+------+-----------------+----------+-----------+----------+\n"); 
//     printf("| STT | MaSV |       Ho va Ten | Que quan | Chieu cao | Can nang |\n"); 
//     printf("+-----+------+-----------------+----------+-----------+----------+\n"); 
//     for(int i=0;i<n;i++){
//         printf("| %3d | %4d | %15s | %8s | %9.2f | %8.2f |\n"
//                 ,i+1,
//         danhsach[i].masosinhvien,
//         danhsach[i].ten,
//         danhsach[i].quequan,
//         danhsach[i].chieucao,
//         danhsach[i].cannang);
//         printf("+-----+------+-----------------+----------+-----------+----------+\n");
//     }
// }
// void sapxep(sv danhsach[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(danhsach[i].chieucao<danhsach[j].chieucao){
//                 sv t = danhsach[i];
//                 danhsach[i]=danhsach[j];
//                 danhsach[j]=t;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n); 
//     sv danhsach[n];
//     nhap(danhsach,n);
//     inra(danhsach,n);//1
//     sapxep(danhsach,n);
//     inra(danhsach,n);//2
//     sv_hanoi(danhsach,n);
// }


//con trỏ
// #include <stdio.h>  
// void nhap_n(int *n){
//     scanf("%d",n); 
// }
// //&n là địa chỉ của con n
// //*n là con n gốc
// //lưu ý: khi trong hàm có *n, thì n là địa chỉ, không phải &n
// int main(){ 
//     int n=0;
//     nhap_n(&n);
//     printf("%d",n); 
// } 

#include<stdio.h>
#include<string.h>
typedef struct sinhvien{
    char hoten[20];
    char quequan[20];
    int mssv;
    float chieucao;
    int cannang;
}sv;
int nhapds(sv danhsach[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d. Ho va ten : ",i+1);
        do
        {
            gets(danhsach[i].hoten);
        } while (strlen(danhsach[i].hoten) > 30);
        printf("   Que quan : ");
        do
        {
            gets(danhsach[i].quequan);
        } while (strlen(danhsach[i].quequan) > 20 );
        printf("   Ma so sv: ");
        do
        {
            scanf("%d", &danhsach[i].mssv);
        } while (danhsach[i].mssv < 100 || danhsach[i].mssv > 999);
        printf("   Chieu cao : ");
        do
        {
            scanf("%f", &danhsach[i].chieucao);
        } while (danhsach[i].chieucao < 0);
        getchar();
        printf("   Can nang : ");
        do
        {
            scanf("%d", &danhsach[i].cannang);
        } while (danhsach[i].cannang < 0);
        getchar();
    }
    
}
void in1 ( sv danhsach[], int n ){
    printf("| STT | MaSv |        Ho va ten | Que quan | Chieu cao | Can Nang |\n");
    for (int i = 0; i < n; i++)
    {
        printf("| %3d | %4d | %16s | %8s | %9.2f | %9d |\n",
        i+1,
        danhsach[i].mssv,
        danhsach[i].hoten,
        danhsach[i].quequan,
        danhsach[i].chieucao,
        danhsach[i].cannang);
    }
    
}
void sapxep( sv danhsach[], int n){
    printf(" Sap xep lai : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (danhsach[i].chieucao < danhsach[j].chieucao)
            {
                sv clone= danhsach[i];
                danhsach[i] = danhsach[j];
                danhsach[j] = clone;
            }
            
        }
        printf("| %3d | %4d | %16s | %8s | %9.2f | %9d |\n",
        i+1,
        danhsach[i].mssv,
        danhsach[i].hoten,
        danhsach[i].quequan,
        danhsach[i].chieucao,
        danhsach[i].cannang);
    }
    
}
int main(){
    int n;
    printf("nhap so sv : " );
    scanf("%d", &n);
    getchar();
    sv danhsach[n];
    nhapds(danhsach, n);
    in1(danhsach, n);
    sapxep(danhsach, n);
}