// #include<stdio.h>
// // thuat toan tim so nguyen to
//  int soNguyenTo(int soA)
// {
//     if (soA < 2)    
//         return 0;
//     for (int i = 2; i <soA; i++)
//     {
//         if (soA%i==0)
//             return 0;
//     }
//     return 1;
// }
// // in cac so nguyen to be hon n
// void in_snt(int n) {
//     for (int i=0; i<=n; ++i){
//         if ( soNguyenTo(i) == 1)
//             printf("%d\n",i); 
//     }
// }

// int nhap_socheck(){
//     int a;
//       do {
//         printf("nhap so = ");
//         scanf(" %d",&a);
//         if (a<0) 
//             {printf("hay nhap lai");}
//      } while (a<0);
// }

//  int main () {
//     int n= nhap_socheck();
//     in_snt(n);
//  }

// #include<stdio.h>
// int nhap_socheck(){
//     int a;
//       do {
//         printf("nhap so = ");
//         scanf(" %d",&a);
//         if (a<=0) 
//             {printf("hay nhap lai");}
//      } while (a<=0);
// }

// void check(int b){
//     int dem =0;
//     for (int i= 1; dem <b; ++i)
//     {
//       if (i%5 == 0 && i%2 == 0)
//       {
//           printf("%d\n",i);
//           ++dem;
//       }
      
//     }
    
// }

// int main () {
//     int n=nhap_socheck();
//     check(n);
//     return 0;
// }

// #include<stdio.h>
//  int nhap_socheck(){
//     int a;
//       do {
//         printf("nhap so = ");
//         scanf(" %d",&a);
//         if (a<=0) 
//             {printf("hay nhap lai");}
//      } while (a<=0);
// }

//  int tinh_tongphan_so (int so){
//       int tong=0;
//       for (int  i = 1; tong + i*i <= so ; ++i)
//       {
//          tong+=i*i;
//       }
//         return tong;
//  }
//  int main() {
//      int n=nhap_socheck();
//      printf("%d",tinh_tongphan_so(n));
//  }


// ------------ nhap mang
// #include<stdio.h>
//  int main () {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0; i <n; ++i){
//         scanf("%d",&arr[i]);}
    
//     for (int i = 0; i < n; i++){
//         printf("%d\n",&arr[i]);}
    
//  }
// #include <stdio.h>  
// int main(){
// int n;
// scanf("%d",&n);
// int a[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for (int i=0;i<n;i++){
//         printf("%d\n",a[i]);
//     }
// }

// -------------------------mang min max
// #include <stdio.h>
// void nhap(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhaapj a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
// }

// int max(int a[], int n)
// {
//     int max = a[0];
//     for (int i = 1; i < n; i++)
//         if (max < a[i])
//             max = a[i];
//     return max;
// }

// int min(int a[], int n)
// {
//     int min = a[0];
//     for (int i = 1; i < n; i++)
//         if (min > a[i])
//             min = a[i];
//     return min;
// }
// int main()
// {
//     int a[99999];
//     int n;
//     printf("\nNhap n = ");
//     scanf("%d", &n);
//     nhap(a, n);
//     printf("\nMax = %d", max(a, n));
//     printf("\nMin = %d", min(a, n));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void inmang(char s[], int size){
//     for (int i=0;i<size;++i)
//         printf("%c",s[i]);
//     printf("\n");
// }

// int dem_so(char s[],int size){
//     int dem=0;
//     for(int i=0;i<size;++i)
//         if(s[i] >= '0' && s[i] <='9')
//             dem++;
//     return dem;
// }
    
// void doikitu(char s[],int size){
//     for (int i=0;i<size;++i)
//         if (s[i]==' ')
//             s[i]='-';

// }
// int main () {
//     char s[100];
//     gets(s);
//     int n=strlen(s);
//     int so_chu_so=dem_so(s,n);
//     printf("%d\n",so_chu_so);
//     inmang(s,100);
//     doikitu(s,n);
//     inmang(s,n);
//     return 0;
// }

// #include<stdio.h>
// void inmang(int a[], int n){
//     for (int i=0;i<n;++i){
//         printf("%d ",a[i]);}
//     printf("\n");
// }

// void erase(int a[], int n, int x){
//     for (int i=0; i<n; ++i){
//         if (a[i]==x){
//             for(int j=i;j<n-1;++j){
//                 a[j]=a[j+1];
//             }
//             n--;
//         }
//     }
//     inmang(a,n);
// }

// void insert(int a[], int n, int x, int index ){
//     for (int i=n-1; i>=index+1;--i){
//         a[i]= a[i-1];
//     }
//     a[index]=x;
// }

// int main () {
//     int a[]= {1,7,3,9,3,20,99};
//     int n= sizeof(a) / sizeof(a[0]);
//     insert(a,n,100,3);
//     inmang(a,n);
//     return 0;
// }

// #include<stdio.h>
// void tinh(int *a, int *b, int *c){
//     if ( *a>8 && *a%2!=0 ) {
//         *a*=*a;
//     }
//      if ( *b>8 && *b%2!=0 ) {
//         *b*=*b;
//     } 
//     if ( *c>8 && *c%2!=0 ) {
//         *c*=*c;
//     }
// }
// int main () {
//     int a,b,c;
//     printf("nhap gia tri a b c");
//     scanf(" %d %d %d",&a,&b,&c);
//     tinh(&a,&b,&c);
//     printf("a= %d\n b= %d\n c=%d\n",a,b,c);

// #include<stdio.h>
// void inmang(int a[], int n){
//     for (int i=0;i<n;++i){
//         printf("%d ",a[i]);}
//     printf("\n");
// }
// void update(int mang[], int size){
//     for( int i=0; i<size; ++i){
//          if (mang[i]%2!=0 && mang[i]>8){
//              mang[i] *=mang[i];
//          }
//     }     
// }
// void inputmang(int *mang, int size){ 
//      for( int i=0; i<size; ++i){
//         printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d ", mang+i);
//     }
// }

// int lietkechan(int *mang, int size){
//     int dem =0;
//     for(int i = 0; i < size; i++){
//         if( *(mang+i) % 2 == 0)
//         {
//             printf("%d ", *(mang+i));
//             dem++;
//         }
       
//     } 
//     printf("\n");
//     return dem;
// }
        
// int main () {
//     int mang[] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(mang)/sizeof(mang[0]);
//     lietkechan(mang,size);
//     inmang(mang,size);
    
// }

// #include <stdio.h>
// #include <string.h>
// #include<ctype.h>
// // void kiemtra( char x[], char y[]){
// //     if(strstr(x, y)==NULL)
// //         printf("Khong");
// //     else
// //         printf("Co");
// // }
// int dem(char *s,char t){
//     int dem=0;
//     for(int i=0;i<=strlen(s);i++){
//         if(s[i]==t) dem=dem+1;  
//     }
//     return dem;
// }
// int main(){
//     char ho[10],t;
//     gets(ho);
//     char ten[10];
//     gets(ten);
//     char s[20];
//     gets(s);
//     scanf("%c",&t);
//     printf("%d",dem(s,t)); 
// }

// #include<stdio.h>
// #include<string.h>
 
// struct Bo {
// can nang, giong, tuoi, gioitinh, ten, chieucao
//     char ten[20];
//     int tuoi;
//     char gioitinh;
//     char giong[20];
//     float cannang;
//     float chieucao;
// };
 
// void inthongtin(struct Bo bo){
//     printf("| %s | %d | %c | %s | %.2f | %.2f |\n", 
//         bo.ten,
//         bo.tuoi,
//         bo.gioitinh,
//         bo.giong,
//         bo.cannang,
//         bo.chieucao
//     );
// }
// void inthongtin_all(struct Bo danhsach[], int n){
//     for (int i = 0; i < n; ++i)
//         inthongtin(danhsach[i]);
// }
// // Viet ham nhap lieu cho cac con bo
// void nhaplieu(struct Bo danhsachBo[], int n){
//     for (int i = 0; i < n; ++i){
//         getchar();
//         printf("Nhap ten bo: ");
//         gets(danhsachBo[i].ten);
//         printf("  Nhap tuoi: ");
//         scanf("%d", &danhsachBo[i].tuoi); getchar();
//         printf("  Nhap gioi tinh: ");
//         scanf("%c", &danhsachBo[i].gioitinh); getchar();
//         printf("  Nhap giong: ");
//         gets(danhsachBo[i].giong);
//         printf("  Nhap can nang: ");
//         scanf("%f", &danhsachBo[i].cannang);
//         printf("  Nhap chieu cao: ");
//         scanf("%f", &danhsachBo[i].chieucao);
//     }
// }
 
// int main(){
//     int n;
//     printf("Nhap vao so bo: ");
//     scanf("%d", &n);
//     struct Bo danhsachBo[n];
//     nhaplieu(danhsachBo, n);
//     inthongtin_all(danhsachBo, n);
//     return 0;
// }

// #include<stdio.h>
// void CountX(int a[], int n){
//     int count =0, x;
     
//     printf("\nNhap phan tu can dem: ");
//     scanf("%d",&x);
//     for(int i=0;i<n;i++){
//         if(a[i]==x)
//             count ++;
//     }
     
//     printf("Phan tu %d xuat hien %d lan",x,count);
// }

// #include<stdio.h>
// #include<string.h>
// int bai1a (char *s,int n)
// {
//     for(int i=0;i<n;i++)
// 	{
// 		do
// 		{
// 			printf("Enter Password: ");
// 			gets(s);
// 		}
// 		while(s[i]=='!'|| s[i]=='@'|| s[i]=='#'||s[i]=='$');
// 		printf("Mat khau nay co the su dung\n");
//     }
// }

//  int main () 
// {
//     int n;
//     char s[n];
//     bai1a(s,strlen(s));

// }


// #include <stdio.h>  
// void nhap (char a[],int *n){
//     scanf("%d",n);
//     int dem;
//     do{
//         for(int i=0;i<*n;i++)
//         {
//             scanf("%c",&a[i]); 
//         } 
//         dem=0;
//         for(int i=0;i<*n;i++){
//             if(a[i]<48 || a[i]>57 && a[i]<65 || a[i]>90 && a[i]<97 || a[i]>122){
//                 dem++;
//             }
//         } 
//     }while(dem==0 && a[0]!='P');
// }
// void xoa(char a[],int *n){
    
// }
// int main(){ 
//     int n;
//     char a[100];
//     nhap(a,&n);
//     xoa(a,&n);
// }


// #include<stdio.h>
// #include<string.h>
// typedef struct hocsinh 
// {
//     char ten[100];
//     int namsinh;
//     float chieucao;
// } Hs;

// void indanhsach (Hs ds[],int n)
// {
//     printf("+-----+--------------------+----------+------+\n");
//     printf("| STT |         Ten        | Nam sinh | Cao |\n");
//     printf("+-----+--------------------+----------+------+\n");
//     for ( int i=0; i<n;i++)
//     {
    
//     printf("\n|%-5d|%-20s|%-10d|%-6.2f| ", i+1,ds[i].ten, ds[i].namsinh,ds[i].chieucao);
//     printf("\n+-----+--------------------+----------+------+");
//     }
// }

// int main ()
// {
//     int n=2;
//     Hs ds[n];
//     Hs x = {"Buyako Saka", 2001, 1.78};
//     Hs y = {"Gabriel Martineli", 2003, 1.79};
//     ds[0]= x;
//     ds[1]= y;
//     indanhsach(ds,n);

// }

// #include <stdio.h>
// #include <string.h>
 
// void nhap(int N, int M, int A[N][M]){
//     for (int i = 0; i < N; ++i)
//         for (int j = 0; j < M; ++j){
//             printf("A[%d][%d] = ", i, j);
//             scanf("%d", &A[i][j]);
//         }
// }
 
// void in_maxle(int N, int M, int A[N][M]){
//     int max = A[0][0];
//     int found = 0;
//     for (int i = 0; i < N; ++i)
//         for (int j = 0; j < M; ++j)
//             if (max < A[i][j] && A[i][j]%2==1){
//                 max = A[i][j];
//                 found = 1;
//             }
//     if (found)
//         printf("Max so le = %d\n", max);
//     else 
//         printf("Not found\n");
// }
 
// void tinhtong(int N, int M, int A[N][M]){
//     int minMN = (M > N)? N : M;
//     int tong = 0;
//     for (int i = 0; i < minMN; ++i){
//         tong += A[i][i];
//     }
//     printf("%d\n", tong);
// }
 
// int main(){
//     // 2 dimension array, 2x3 [[1,2,3],[2,4,3]]
//     int N,M;
//     scanf("%d %d", &N, &M);
//     int A[N][M];
 
//     nhap(N,M,A);
 
//     for (int i = 0; i < N; ++i){
//         for (int j = 0; j < M; ++j)
//             printf("%d ", A[i][j]);
//         printf("\n");
//     }
 
//     in_maxle(N,M,A);
//     tinhtong(N,M,A);

 
//     return 0;
// }