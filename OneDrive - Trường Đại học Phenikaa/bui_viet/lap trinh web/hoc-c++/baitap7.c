// -------------------------------------------7.1
// #include <stdio.h>
// int main (){
// 	int hangtram, hangchuc, hangdv, demso=0,n,a;
// 	scanf("%d",&a);

//  		 for ( n=3; n<a; n+=3){
// 			hangtram = n / 100;
// 			hangchuc = (n%100)/10;
// 			hangdv = (n%100)%10;

// 			if (hangdv + hangtram == hangchuc ){
// 				printf("%d ",n);
// 				demso+=1;

// 			}
// 			if (demso ==10 ){
// 				printf("\n");
// 				demso=0;
// 			}
			
// 		}
// return 0;		
// }
// -----------------------------------------7.2
// #include<stdio.h>
// int main () {
//     int tienlai,sodu, tiengui,tiengui2; 
//     float phantram;
//     char ten[100];
//     int tong=0;
//     scanf("%f",&phantram);
//     getchar();
//     gets(ten);
//     scanf("%d",&tiengui,&tiengui2);
//     printf("Tai khoan khach hang: %s\n",ten);
//     printf("Thang\tTien dau ky\tTien lai\tSo du\n");
//     for(int i = 1; i < 7; ++i) 
//     {
//         tienlai = tiengui*phantram/100;
//         sodu=tiengui+tienlai;
//         printf("%5d%14d%13d%15d\n",i,tiengui,tienlai,sodu);   
//         tiengui=sodu;
//         tong+=tienlai;
//     }
//     printf("Tong lai: %d",tong);
//     return 0;
// }
// --------------------------------------------7.3

// #include <stdio.h>
//  int main (){
//      int n;
//      scanf("%d",&n);
//     for(int i = 1; i <= n; i++) 
//       {
//         for(int j = 1; j <= i; j++) {
//             printf("*");}
//        printf("\n"); 
//       }
//     for(int i=n;i>0;i--)
//     {
//        for(int j=1;j<=i;j++)
//          printf("*");
//        printf("\n");
//     }
//     for(int i = 1; i <= n; i++) { 
//         for(int j = i; j < n; j++) {
//             printf(" ");
//         }
//         for(int j = 1; j <= (2*i-1); j++) {
//             printf("*");}
//         for(int j = i; j >0; j--) {
//             printf(" ");    
//         }
//         printf("\n");
//     }
// }
// -----------------------------------------7.5
//  #include<stdio.h>
//   int main () {
//     int n,dem=0;
//     scanf("%d",&n);
//     char i='a';
//     for(i='A'; i<='Z'; i++){
//         printf("%c ", i);
//       dem+=1;
//      if (dem==7){
//       printf("\n");
//       dem=0; }  
//     }
// }
// ----------------------------------7.7
// #include <stdio.h>
//   int main(){
//   int i,n,s1=0,s2=0,s3=0;
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//       s1+=i;
//       if(i%2==0)
//         s2+=i;
//       if(i%2!=0)
//         s3+=i;
// }
//     printf("%d\n%d\n%d",s1,s2,s3);
// }
// --------------------------------------7.6
// #include<stdio.h>
// int main(){
//     int n,n1=1;
//     scanf("%d",&n);
//     for (int i =1; i <= n; i++)
//     {    
//          n1 *= i;
//     }
//     printf("%d",n1);
// }
// ---------------------------------------7.9
// #include <stdio.h>
//   int main(){
//   int n;
//   float s1=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//       s1+= 1.0/i;
//     }
//     printf("%.2f\n",s1);
// }
// -----------------------------------------7.10
// #include<stdio.h>
// int main(){
//      int n ;
//      scanf("%d", &n);
     
//      if (n < 2)
//      {
//           printf("KHONG");
//      }
//      int s = 0;
//      for (int i = 2; i < n; i++)
//      {
//           if (n % i == 0){
//                s++;
//           }
//      }
//      if (s == 0)
//      {
//           printf("CO");
//      }
//      else{
//           printf("KHONG");
//      }
// }
// ---------------------------------7.11
// #include <stdio.h>
// int main(){
//     int n=100;
//     double epsilon,i,e=1,m=1;
 
//     scanf("%lf",&epsilon);
//     for(i=1.0;i<=n;i++){
//         m*=1/i;
//         e+=m;
//         if (m<epsilon)
//             break;
//     }
//     printf("%.2f",e);
// }
// ------------------------------------------7.12
// #include <stdio.h>
// #include<math.h>
// int main(){
// float epsilon,s=0,d=0;
// int i=0;
// scanf("%f",&epsilon);
// do {
//     d = 1.0 /(2 * i + 1);
//     s = s + pow (- 1 , i ) * d;
//     i++;
//  } while(d>=epsilon);
//  printf("%.2f",4*s);
// }
// ---------------------------------------8.5
// #include <stdio.h>
// #include<math.h>
// double gt(int x)
// {
//    double t = 1;
//     for (int i = 1; i <= x; i++){
//         t *= i;
//     }
//     return t;
// }
// int main(){
// float x,s=0,T=0,M=0,M2=0,d=0;
// int i=0;
// scanf("%f",&x);
// do {
//     T = pow(x,2.0*i+1); 
//     M =(2.0 * i + 1);
//     M2= gt(M);
//     d=T/M2;
//     s = s + pow (- 1, i ) * d;
//     i++;
//  } while(d>pow(10,-4));
//  printf("%.6f",s);
// }
// ----------------------------------8.6
// #include <stdio.h>
//   int main(){
//     int a,b,ucln=1,i;
//     scanf("%d%d",&a,&b);
//     for(i=2; i<=a||i<=b;i++){
//         if(a%i==0&&b%i==0){
//             ucln=i;
//         }
//     } 
//     printf("%d",ucln);
// }
// ------------------------------------8.7
// #include <stdio.h>
// #include<math.h>
//  int bai_3(int n){
//     int tu,mau,s=0;
//     for(int i=1;i<=n;i++)
//     {
//     tu=pow(2,2*i);
//     mau=2*i-1;
//     s+=tu/mau;
//     }
//     printf("%d",s);
//     return s;
//  }
//  int main(){
//     int n;
//     scanf("%d",&n);
//     bai_3(n);
// }
// -------------------------------------10.2
// #include <stdio.h>
// void inmang(int a[], int n){
//     for (int i=0;i<n;++i){
//         printf("%d ",a[i]);}
//     printf("\n");
// }

// float tbc_soam(int a[], int n){
//     int tong=0,dem1=0;
//     for(int i=0; i<n; i++){
//         if(a[i]<0){
//             tong+=a[i];
//             dem1++;
//         }
//     }
//     return tong/dem1;
// }
// float tbc_soduong(int a[], int n){
//     int tong=0,dem2=0;
//     for(int i=0; i<n; i++){
//         if(a[i]>0){
//             tong+=a[i];
//             dem2++;
//         }
//     }
//     return tong/dem2;
// }


// void find( int a[], int n, int x){
//     for ( int i=0;i<n;++i)
//         if (x==a[i]){
//             i++;
//             printf("%d ",i);
//         }
// }

// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; ++i){
//         // printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d ", &a[i]);
//     }
// }

// int main(){
//     int n, x;
//     scanf(" %d",&n);
//     int a[100];
//     NhapMang(a,n);
//     scanf(" %d",&x);
//     inmang(a,n);
//     printf("%f\n",tbc_soam(a,n));
//     printf("%f\n",tbc_soduong(a,n));
//     find(a,n,x);
// }

// ------------------------------------------------10.3
// #include <stdio.h>
// void sx_tangdan(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if (a[i]>a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }
// void sx_giamdan(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if (a[i]<a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }
// void sx_gttd(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if (a[i]*a[i]<a[j]*a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int n,a[20];
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     sx_tangdan(a,n);
//     sx_giamdan(a,n);
//     sx_gttd(a,n);
// }

// -------------------------------10.4
// #include <stdio.h>
// void mang_b(int a[],int b[], int n){
//     int t1=0;
//     for (int i=0; i<n; i++){
//         if (a[i]<0){
//             b[t1]=a[i];
//             t1++;
//         }
//     }
//     for (int i=0;i<t1;i++){
//     printf("%d ",b[i]);
//     }
//     printf("\n");
// }

// void mang_c(int a[],int c[], int n){
//     int t2=0;
//     for (int i=0; i<n; i++){
//         if (a[i]>0){
//             c[t2]=a[i];
//             t2++;
//         }
//     }
//     for (int i=0;i<t2;i++){
//         printf("%d ",c[i]);
//     }
//     printf("\n");
// }
// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; ++i){
//         // printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }

// int main(){
//     int a[10],b[10],c[10];
//     int n;
//     scanf("%d",&n);
//     NhapMang(a,n);
//     mang_b(a,b,n);
//     mang_c(a,c,n);
// }

// ------------------------------------------------10.5
// #include <stdio.h>
// void cucdaidiaphuong(int a[],int n){
//     int tong=0;
//     for(int i=0;i<n-1;i++){
//         if(a[i+1]>a[i]&&a[i+1]>a[i+2]){
//             tong+=a[i+1];
//         }
//     }
//     printf("%d",tong);
// }
// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; ++i){
//         // printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }

// int main(){
//     int a[10];
//     int n;
//     scanf(" %d",&n);
//     NhapMang(a,n);
//     cucdaidiaphuong(a,n);
// }

// -----------------------------------------------10.6
// #include <stdio.h>
// void sap_xep_a_b(int a[],int b[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if (a[i]>=a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if (b[i]>=b[j]){
//                 int t=b[i];
//                 b[i]=b[j];
//                 b[j]=t;
//             }
//         }
//     }
// }

// int so_sanh(int a[],int b[],int n){
//     int dem=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==b[i]){
//             dem++;
//         }
//     }
//     if(dem==n){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main(){
//     int n,a[10],b[10];
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for (int i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     sap_xep_a_b(a,b,n);
//     int k = so_sanh(a,b,n);
//     if (k==1){
//         printf("Co");
//     }
//     else{
//         printf("Khong");
//     }
// }

// -------------------------------11.4
// #include <stdio.h>

// void NhapMang(int a[], int n)
// {
//    for(int i = 0; i<n; i++)
//    {
//       scanf("%d",&a[i]);
//    }
// }
// void XuatMang(int a[], int n)
// {
//    for(int i = 0; i<n; i++)
//    {
//       printf("%d ",a[i]);
//    }
//    printf("\n");
// }

// void DaoMang(int a[],int n)
// {
//    for(int i=0;i<n/2;i++)
//     {
//       int temp=a[i];
//          a[i]=a[n-1-i];
//          a[n-1-i]=temp; 
//    }
// }

// int main()
// {
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    NhapMang(a,n);
//    DaoMang(a,n);
//    XuatMang(a,n);
// }
// -------------------------------------11.5
// #include <stdio.h>
// #include <string.h>
// int doixung(char s[100])
// {
//    int i,n;
//    n= strlen(s);
//    for(i=0;i<n/2;i++)
//    {
//       if(s[i]!=s[n-1-i])
//       return 0;
//    }
//    return 1;
// }
// int main()
// {
//    char chuoi[100];
//    gets(chuoi);
//     if(doixung(chuoi)==0)
//    printf("Khong");
//    else printf("Co");
 
// }
// -----------------------------------------------12.2
// #include<stdio.h>
// #include<string.h>
// void NhapMang(double a[], int n){
//     for(int i = 0;i < n; ++i){
//         scanf(" %lf", &a[i]);
//     }
//     if (n=0) return NULL;
// }

// float Max(double a[],int n)
// {
//   float max=a[0];
//   for (int i=0; i<n;i++)
//   {
//     for (int j=i;j<n;j++)
//     {
//       if (a[i]>a[j])
//         max=a[i];
//     }
    
//   }
//   return max;
// }

// // double Max(double a[], int n)
// // {
// //    double max = a[0];
// //    for(int i=1;i<n;i++)
// //    if(max<a[i])
// //       max=a[i];
// //    return max;
// // }

// int main ()
// {
//   int n;
//   scanf("%d",&n);
  
//   double a[n];
//   NhapMang(a,n);
//   printf("%f",Max(a,n));
// }
// ----------------------------------------12.1
// #include<stdio.h>
// void Nhap_mang(int *a,int n)
// {
//   for ( int i=0; i<n; i++)
//   {
//     scanf(" %d",&a[i]);
//   }
// }

// void demsochan (int *a,int n)
// {
//   int dem=0;
//   for (int i= 0; i < n; i++)
//   {
//     if (a[i]%2==0)
//     {
//       dem++;

//     }

//   }
//   printf("%d",dem);
  
// }


// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   Nhap_mang(a,n);
//   demsochan(a,n);

// }
// --------------------------------12.5
// #include<stdio.h>
// void nhapmang(double *a,int n) 
// {
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%lf",&a[i]);
//   }
  
// }

// double mean(double *a,int n)
// {
//   double s=0, m=0;
//   for (int i = 0; i < n; i++)
//   {
//     s +=a[i];
//   }
//   m=s/n;
//   return m;
  
// }

// void khoangcach(double*a,int n,double *b)
// {
//   double m=mean(a,n);
//   for (int i = 0; i < n; i++)
//   {
//     b[i]=(m-a[i])*(m-a[i]);

//   }

// }

// void min(double *a,double *b,int n)
// {
//   double min =b[0];
//   int c=0;
//   for (int i = 0; i < n; i++)
//   {
//     if (b[i]<= min)
//     {
//       min=b[i];
//       c=i;
//     }

//   }

//   printf("%.1f",a[c]);
// }

// int main()
// {
//   int n;
//   scanf("%d",&n);
//   double a[n],b[n];
//   nhapmang(a,n);
//   khoangcach(a,n,b);
//   min(a,b,n);


// }
// -------------------------------13.1
// #include<stdio.h>
// #include <string.h>
// void dem_khoangtrang(char s[], int n)
// {
//   int dem=0;
//   for(int i=0;i<n;i++)
//   {
//     if(s[i]==' ')
//     dem++;
//   }
//   printf("%d",dem);
// }

// int main()
// {
//   char s[100];
//   gets(s);
//   dem_khoangtrang(s,strlen(s));
// }
// -----------------------------------13.2
// #include <stdio.h>
// #include <string.h>
// void xoa_khoang_trang(char s[], int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     if(s[i]==' ' && s[i+1]==' ')
//     {
//       for(int j=i+1;j<n;j++)
//       {
//       s[j]=s[j+1];
//       }
//     i--;
//     }
//   }
//   printf("%s",s);
// }
// int main()
// {
//   char s[100];
//   gets(s);
//   xoa_khoang_trang(s,strlen(s));
// }
// --------------------------------------13.3
// #include <stdio.h>
// #include <string.h>
// void in_ten(char s[], int n)
// {
//   for(int i=n-1;i>=0;i--)
//   {
//     if(s[i]==' ')
//     {
//       for(int j=i+1;j<n;j++)
//       {
//         printf("%c",s[j]);
//       }
//       break;
//     }
//   }
// }

// int main(){
//   char s[100];
//   gets(s);
//   in_ten(s,strlen(s));
// }
// -----------------------------------13.4
// #include <stdio.h>
// #include <string.h>
// void dem_khoangtrang(char s[], int n)
// {
//   int dem=0;
//   for(int i=0;i<n;i++)
//   {
//     if(s[i]==' ')
//     dem++;
//   }
//   printf("%d",dem+1);
// }

// int main(){
//   char s[100];
//   gets(s);
//   dem_khoangtrang(s,strlen(s));
// }
// --------------------------------13.5
// #include <stdio.h>
// #include <string.h>
// void xuly(char a[], char b[], char c[])
// {
//   for (int i=0;i<strlen(a);i++)
//   {
//     if (a[i]==b[0])
//     {
//       printf("%s", c);
//     }
//     else
//     {
//     printf("%c", a[i]);
//     }
//   }
// }

// int main()
// {
//   char a[100], b[2], c[2];
//   gets(a);
//   gets(b);
//   gets(c);
//   xuly(a,b,c);
// }
// --------------------------------13.6

// #include <stdio.h>
// #include <string.h>
// void dich_ma(char b[],char c[],int n,int a)
// {
//   for(int i=0;i<n;i++)
//   {
//     if(b[i]+a<='z')
//       b[i]+=a;
//     else
//     b[i]+=(-26+a);
//   }
//   for(int i=0;i<n;i++)
//   {
//     if(c[i]-a>='a')
//       c[i]-=a;
//     else
//       c[i]-=(-26+a);
//   }
//   printf("%s\n%s",b,c);
// }

// int main()
// {
//   int a;
//   char b[100],c[100];
//   gets(b);
//   gets(c);
  
//   scanf("%d",&a);
//   dich_ma(b,c,strlen(b),a);
// }

// ---------------------------------13.7
// #include <stdio.h>
// #include <string.h>

// void dao_ma(char a[],char b[],int n,int n1)
// {
//   char s=a[0];
//   for(int i=0;i<n;i++)
//   {
//     a[i]=a[i+1];
//   }
//   a[n-1]=s;

//   char s1=b[n1-1];
//   for(int i=n1-1;i>0;i--)
//   {
//     b[i]=b[i-1];
//   }
//   b[0]=s1;  
//   printf("%s\n%s",a,b);
// }

// int main()
// {
//   char a[100],b[100];
//   gets(a);
//   gets(b);
//   dao_ma(a,b,strlen(a),strlen(b));
// }


// #include<string.h>
// #include<stdio.h>
// void doikitu(char a[],char b[])
// {   
//     char s=a[0];
//     for (int i = 0; i < strlen(a); i++)
//     {   
//         a[i] = a[i+1];
        
//     }
//     a[strlen(a) ]=s;
//     // printf("%s", a);

//     char s1=b[strlen(b)-1];
//   for(int i=strlen(b)-1;i>0;i--)
//   {
//     b[i]=b[i-1];
//   }
//   b[0]=s1;  
//   printf("%s\n%s",a,b);
// }

// int main(){
//     char s[100],x[100];
//     gets(s);
//     gets(x);
//     doikitu(s,x);
// }