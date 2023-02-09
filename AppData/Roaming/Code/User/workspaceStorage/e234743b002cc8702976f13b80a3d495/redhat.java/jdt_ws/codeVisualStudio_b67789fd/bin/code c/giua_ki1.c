// // P1 - bai 3
// #include<stdio.h>

// void check_tam_giac(int a, int b, int c){
//     if (a*a==b*b + c*c  || b*b==a*a+c*c || c*c==b*b+a*a || a==b || b==c || a==c){
//         printf("la tam giac vuong");}
//     else 
//     printf("khong la tam giac vuong");  
// }

// int main() {
//     int a,b,c;
//       do {
//         printf("nhap ba canh cua tam giac a b c =");
//         scanf(" %d %d %d",&a,&b,&c);
//         if (a<=0 && b<=0 && c<=0) 
//             {printf("hay nhap lai\n");}
//      } while (a<=0&&b<=0&&c<=0);
//     check_tam_giac(a,b,c);
// }

// ---- phan 1 bai7

// #include<stdio.h>
// int bai7(int n){
//     int hang_nghin,hang_tram,hang_chuc,hang_dv;
//  hang_nghin =n/1000;
//  hang_tram = n%1000/100;
//  hang_chuc =n%1000%100/10 ;
//  hang_dv = n % 10 ;
//  int max=hang_dv;
//  if(hang_chuc>max)
//   max=hang_chuc;
//  if(hang_tram>max)
//   max=hang_tram;
//  if(hang_nghin>max)
//   max=hang_nghin;
// return max;
// }


// int main(){
//     int n;
//       do {
//         printf("nhap so = ");
//         scanf(" %d",&n);
//         if (n<=0) 
//             {printf("hay nhap lai\n");}
//      } while (n<=0);

//     int b=bai7(n);
//     if (b%2==0)
//     printf("THOA MAN"); 
//     else 
//     printf("khong thoa man");

// }
 

#include<stdio.h>
int main() {
    int giay,phut,gio;
    printf("Nhap giay: ");
    scanf("%d",&giay);
    gio=giay/3600;
    giay=giay%3600;
    phut=giay/60;
    giay=giay%60;
    printf("sau khi chuyen %02d:%02d:%02d ", gio,phut,giay);
}