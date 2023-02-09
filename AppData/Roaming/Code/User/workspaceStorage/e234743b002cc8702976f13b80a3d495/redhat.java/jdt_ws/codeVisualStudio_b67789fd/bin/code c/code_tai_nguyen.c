
// --------------------------nhap giay tinh-->> gio:phut:giay
//     int giay,phut,gio;
//     printf("Nhap giay: ");
//     scanf("%d",&giay);
//     gio=giay/3600;
//     giay=giay%3600;
//     phut=giay/60;
//     giay=giay%60;
//     printf("sau khi chuyen %02d:%02d:%02d ", gio,phut,giay);
// }
   
// ------------------------min-max---
// min=max=a;
//           if(b>max)
//             max=b;
//           if(c>max)
//             max=c;
//           printf("\nSo lon nhat la %d", max);
//           if(b<min)
//             min=b;
//           if(c<min)
//             min=c;
//           printf("\nSo nho nhat la %d", min);

// -------------------------tach so co 3 chu so-
// int n, hangtram, hangchuc, hangdv;
// printf ("nhap so vao day = ");
// scanf("%d", &n);
// hangtram = n / 100;
// hangchuc = (n - hangtram*100)/10;
// hangdv = n % 10;


// -------- nhap so ----------
// int nhap_socheck(){
//     int a;
//       do {
//         printf("nhap so = ");
//         scanf(" %d",&a);
//         if (a<0) 
//             {printf("hay nhap lai");}
//      } while (a<0);
// }


// ------------ thuat toan tim so nguyen to
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
// --------------in cac so nguyen to be hon n
// void in_snt(int n) {
//     for (int i=0; i<=n; ++i){
//         if ( soNguyenTo(i) == 1)
//             printf("%d\n",i); 
//     }
// }

// --------------------------------ve hinh tam giac **
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

// -------------------------ucln
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
// -----------------------------bcnn
// #include <stdio.h>
//  int main(){
//     int a,b,bcnn=1,i;
//     scanf("%d %d",&a,&b);
//     for(i=1;;i++){
//         if(i%a==0&&i%b==0){
//             bcnn=i;
//             break;
//         }
//     } 
//     printf("%d",bcnn);
// }

// ------------------------check so chinh phuong
// int sochinhphuong(int a, int b){
//     int i;
//     for(int i=1;i<=b;i++){
//         if(i*i>=a&&i*i<=b){
//             printf("%d ",i*i);
//         }
//     }
// }
// -----------------------tim vi tri trong __mang 
// int find( int a[], int n, int x){
//     for ( int i=0;i<n;++i)
//         if (x==a[i])
//         return 1;
//     return 0;
// }

// int get_index( int a[], int n, int x){
//     for ( int i=0;i<n;++i)
//         if (x==a[i])
//         return i;
//     return -1;
// }
// ----------------------------xoa phan t tu trong mang -
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
// ---------------------------them phan tu trong mang--
// void insert(int a[], int n, int x, int index ){
//     for (int i=n-1; i>=index+1;--i){
//         a[i]= a[i-1];
//     }
//     a[index]=x;
// }

// ------------------------------------in _mang
// void inmang(int a[], int n){
//     for (int i=0;i<n;++i){
//         printf("%d ",a[i]);}
//     printf("\n");
// }
//------------------------------------Xuat Mang
// void XuatMang(int a[100], int n)
// {
//    for(int i = 0; i<n; i++)
//    {
//       printf("%4d",a[i]);
//    }
// }
// -----------------------NHAP MANG basic
// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; ++i){
//         printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }
//---------------------------------Nhap Mang ++
// void NhapMang(int a[100], int n)
// {
//    for(int i = 0; i<n; i++)
//    {
//       printf("\tNhap phan tu [%d]: ",i);
//       scanf("%d",&a[i]);
//    }
// }

// -------------------------sap_xep_tang_dan
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
// -------------------------sap_xep_giam_dan
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
// ---------------------------sap_xep_gia_tri_tuyet_doi
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
// -------------------------------chuyen so am sang mang b - ap dung voi mang a nhap o tren
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
// ---------------------------------chuyen so duong mang c - ap dung voi mang a nhap o tren
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
// --------------dem so lan xuat hien cua 1 so trong mang--
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
// --------------------xoa so trung nhau-------
// void Xoatrung(int a[],int *N){
//    int i,j,k;
//    for (i=0;i<(*N)-1;i++){
//     j=i+1;
//     while (j<*N)
//       if (a[i]==a[j]){
//          for (k=j;k<(*N)-1;k++) a[k]=a[k+1];
//          *N=(*N)-1;
//       }
//       else j=j+1;
//    }
// }
//------------------------------------Dao mang
// void DaoMang(int a[],int n)
// {
//    for(int i=0;i<n/2;i++)
//     {
//       int temp=a[i];
//          a[i]=a[n-1-i];
//          a[n-1-i]=temp; 
//    }
// }
// ---------------------------------------check chuoi ki tu doi xung--
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
// ----------------------------mang max----
// int Max(int a[], int n)
// {
//    int temp = a[0];
//    for(int i=1;i<n;i++)
//    if(temp<a[i])
//       temp=a[i];
//    return temp;
// }