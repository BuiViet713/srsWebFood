// #include <stdio.h>
// int main () {
//     printf("Chao PHENIKAA UNIVERSITY!\n");
//     printf("Ten toi la: Nguyen Van A\n");
//     printf("Gioi tinh: Nam\n");
//     printf("Tuoi: 18\n");
//     printf("Que quan: Ha Noi\n");
//     printf("Toi la sinh vien lop CNTT Viet-Nhat K13\n");
// }

// #include <stdio.h>



// int main(){
// int a=10;
// int s1, s2, v;
// s1 = a*a;
// s2 = 6*a*a;
// v = a*a*a;
// printf("%d\n%d\n%d\n", s1, s2, v);
// return 0;
// }



// #include <stdio.h>
// #define PI 3.142
// int main(){
//     double r, c, ac, as, v;
//     r = 5.678;
//     printf("Radius = %f\n",r);
//     c = 2.0 * PI *r;
//     printf("Circle's circumference = %f\n",c);
//     ac = PI * r * r;
//     printf("Circle's area = %f\n",ac);
//     as = 4.0 * PI * r * r;
//     printf("Sphere's area = %f\n", as);
//     v = 4.0/3.0 *PI * r *r *r;
//     printf("Sphere's volume = %f\n",v);
// }



// #include <stdio.h>
//  int main()
// {
//     printf("      *\n");
//     printf("    *   *\n");
//     printf("   * * * *\n");
//     printf("  *       *\n");
//     printf(" *         *\n");
//     return 0;
// }


// #include <stdio.h>
// int main () {
// int a;
//   scanf("%d",&a);
//   printf("%d\n",a*a );
//   printf("%d\n", a*a*a);
//   printf("%d\n", a*a*a*a);
//   return 0;
// }

// ----------------------------------------------3.2
// #include <stdio.h>
// int main () {
//     int d,m,y;
//     scanf("%d%d%d",&d ,&m ,&y);
//     printf("%02d/%02d/%04d",d,m,y);
//     return 0;
// }
// -------------------------------------------------3.3
// #include <stdio.h>
// int main () {
//     int a,b,tong,hieu,tich,thuong;
//     scanf("%d%d",&a,&b);
//     tong=a+b;
//     hieu=a-b;
//     tich=a*b;
//     thuong=a/b;
//     printf("%d\n",tong);
//     printf("%d\n",hieu);
//     printf("%d\n",tich);
//     printf("%d\n",thuong);
// }

// -------------------------------------------------3.4
// #include <stdio.h>
// int main () {
//     float R;
//     printf("");
//     scanf("%f",&R);
//     printf("%.4f\n",4*3.14159265*R*R);
//     printf("%.4f", 4*3.141592653*R*R*R/3);
//     return 0;
// }

// ----------------------------------------------------3.5
// #include <stdio.h>
// int main() {
//     int giay,phut,gio;
//     printf("");
//     scanf("%d",&giay);
//     gio=giay/3600;
//     giay=giay%3600;
//     phut=giay/60;
//     giay=giay%60;
//     printf("%02d:%02d:%02d ", gio,phut,giay);
// }

//  --------------------------------------------------- 3.6

// #include<stdio.h>
// int main () {
    
//     char ten1[100], quequan1[100];
//     char ten2[100], quequan2[100];
//     int tuoi1, tuoi2;

//     gets(ten1);
//     gets(quequan1);
//     scanf("%d",&tuoi1);
//     getchar();
//     gets(ten2);
//     // getchar();
//     gets( quequan2);
//     // getchar();
//     scanf(" %d",&tuoi2);

//     printf("Nhap thong tin sinh vien 1:\n");
//     printf("- Ten: %s\n",ten1); 
//     printf("- Que quan: %s\n",quequan1); 
//     printf("- Tuoi: %d\n", tuoi1); 
    

//     printf("Nhap thong tin sinh vien 2:\n");
//     printf("- Ten: %s\n",ten2); 
//     printf("- Que quan: %s\n",quequan2); 
//     printf("- Tuoi: %d\n", tuoi2); 
    
//     printf("Cac sinh vien da nhap vao:\n");
//     printf("*-----------------------------------------------*\n");
//     printf("| Ten | Que quan | Tuoi |\n");
//     printf("*-----------------------------------------------*\n");
//     printf("| %s | %s | %d | \n", ten1,quequan1,tuoi1);
//     printf("*-----------------------------------------------*\n");
//     printf("| %s | %s | %d | \n", ten2,quequan2,tuoi2);
//     printf("*-----------------------------------------------*\n");
// return 0;

// }

// ------------------------------------------4.1
// #include <stdio.h>
// int main () {
//     int so;
//     scanf ( "%d",&so);
//     printf("\\%d%%\\\"%d%%\"\\\'%d%%\'\\",so,so,so);
//     return 0;
// }

// ----------------------------------------------4.2
// #include <stdio.h>
// int main() {
//     char a;
//     int b;
//     float c;
//     double d;
//     scanf("%c",&a);
//     scanf("%d",&b);
//     scanf("%f",&c);
//     scanf("%lf",&d);
//     printf("%c\n%d\n%.2f\n%.2f\n",a,b,c,d);
//     return 0;
// }
// ---------------------------------------------4.3
// #include <stdio.h>
 
// int main(){
//   float r ;
//   scanf("%f",&r);
//   printf("%.2f\n",r*r*3.14);
//   printf("%.2f\n",r*2*3.14);
//   return 0;
// }
// --------------------------------------------4.4

// #include <stdio.h>
// int main () {
//     char a[100];
//     int c,d;
//     char b[20];
//     float q;
//     gets (a);
//     scanf("%d%d",&c,&d);
//     getchar();
//     gets(b);
//     printf ("BK Bookdseller\n\n");
//     printf ("Qty\tISBN\tTitle\tPrice\tTotal\n");
//     printf("---------------------------------------------\n");
//     printf("%d\t%s\t%s\t%d\t%d\n\n",d,b,a,c,c*d);
//     printf("VAT 5%% \n");
//     q=1.05*c*d;
//     printf ("You pay: %.2f",q);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     char TS[100];
//     int gia;
//     int SL;
//     char MS[100];
//     gets(TS);
//     scanf("%d",&gia);
//     scanf("%d",&SL);
//     scanf("%s", &MS);

//     int Total = gia * SL;
//     printf("BK Bookseller\n\n");
//     printf("Qty	ISBN	Title		Price	Total\n");
//     printf("----------------------------------------------\n");
//     printf("%-8d%-7s%-17s%-10d%-10d\n\n",SL,MS,TS,gia,Total);
//     printf("VAT 5%%\n");
//     float phaitra = Total * 1.05;
//     printf("You pay: %.2f", phaitra);
//     return 0;
//     }
// -------------------------------------------------4.5
// #include <stdio.h>
// int main(){
//     char ten[100],  lop[100];
//     int dd, mm, yyyy, mssv;

//     gets(ten);
//     scanf("%02d/%02d/%04d",&dd,&mm,&yyyy);
//     getchar;
//     scanf("%d",&mssv);
//     scanf("%s",lop);

//     printf("Ho Ten: %s\n",ten);
//     printf("Ngay sinh: %02d/%02d/%04d\n",dd,mm,yyyy);
//     getchar;
//     printf("MSSV: %d\n",mssv);
//     printf("Lop: %s",lop);
//     return 0;
// }
// ------------------------------------------------------4.6
// #include <stdio.h>
// int main ()
// {
//    char monhoc[100], class[100];
//    int stt, ngay, thang, nam, gio1, phut1, gio2, phut2;
//    scanf("%d", &stt);
//    scanf("%02d/%02d/%04d", &ngay, &thang, &nam);
//    gets(class);
//    gets(monhoc);
//    scanf("%d%d", &gio1, &phut1);
// getchar;
//    scanf("%d%d", &gio2, &phut2);
//    printf("STT\tNgay Thang\tTen lop\tTen mon hoc\tBat dau\tKet thuc\n");
//    printf("%d\t%02d/%02d/%04d\t|%s|\t|%s|\t|%d|:|%.2d|\t|%d|:|%.2d|", stt, ngay, thang, nam, class, monhoc, gio1, phut1, gio2, phut2);
// }

// #include<stdio.h>
// int main () {
//    char stt[100], dd[100], h1[100],h2[100];
//    char lop[100], mon[100];
//    gets(stt);
//    gets(dd);
//    gets(lop);
//    gets(mon);
//    gets(h1);
//    gets(h2);
//    printf("STT\tNgay Thang\tTen lop\tTen mon hoc\tBat dau \tKet thuc\n");
//    printf("%s\t%s\t%s\t%s\t%s\t%s", stt, dd, lop, mon, h1, h2);
// }
// -----------------------------------5.1

// #include<stdio.h>
// int main () {
//    double x,y;
//    scanf("%lf",&x);
//    scanf("%lf",&y);
//    printf("(%.2f,%.2f)",x,y);
//    return 0;
// }
// ----------------------------------5.2
// #include <stdio.h>
// int main (){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int Kq1 = a++ + ++a;
//     int Kq2 = --a - b-- * ++c;
//     printf("%d\n",Kq1);
//     printf("%d",Kq2);
//     return 0;
// }
// -----------------------------------5.3
// #include<stdio.h>
// int main () {
//    int a, b, c, max;
//    scanf("%d %d %d", &a, &b, &c);
//    max=a;
//    if(b>max)
//    max=b;
//    if(c>max)
//    max=c;
//    printf("%d", max);
// return 0;
// }
// --------------------------------------5.4
// #include <stdio.h>
// int main () {
//     int sodien, dongia, giatien;
//     scanf("%d",&sodien);
//     dongia= (sodien <= 50) ? 500
//             :(sodien <= 100) ? 1000
//             :(sodien <= 150) ? 1200
//             :(sodien <= 200) ? 1600
//             :10000;
//      giatien= (sodien <= 50) ? 500*sodien
//             :(sodien <= 100) ? 50*500+(sodien-50)*1000 
//             :(sodien <= 150) ? 50*500+50*1000+(sodien-100)*1200
//             :(sodien <= 200) ? 50*500+50*1000+50*1200+(sodien-150)*1600
//             :100000;
//     printf("So dien tieu thu trong thang la: %d\n",sodien);
//     printf("So tien phan tra la            : %d",giatien);
//     return 0;
// }
// ---------------------------------------5.5
// #include <stdio.h>
// #include <math.h>
//  int main () {
//     double a, b, c, delta, x1, x2;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     delta=b*b-4*a*c;
//     printf("%.2f",delta);
// ------------------------------------------5.6
// #include <stdio.h>
// #include <math.h>
//  int main () {
//     double a, b, c, delta, x1, x2;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     delta=b*b-4*a*c;
//      x2 = (float) ((-b + sqrt(delta)) / (2*a));
//      x1 = (float) ((-b - sqrt(delta)) / (2*a));
//    printf("%.2f \n",x1);
//    printf("%.2f",x2);
//  }
// -------------------------------------------5.7
// #include<stdio.h>
// #include<math.h>
// int main () {
//   float x, y, z;
//   scanf("%f %f %f",&x,&y,&z);
//   printf("%.2f",((x+y+ sqrt(z)) / ((x*x)+(y*y)+1)) - fabs(sin(x)-(z*cos(y))));
// }
// -------------------------------------------6.1
// #include <stdio.h>
// int main () {
//     int a;
//     scanf("%d",&a);
//     if (a % 2 ==0 )
//      printf("Ban vua nhap so chan");
//     else  
//      printf("Ban vua nhap so le");
// }
// --------------------------------------6.2
// #include<stdio.h>
// int main () {
//    int a, b, max;
//    scanf("%d %d", &a, &b);
//    max=a;
//    if(b>max)
//    max=b;
//    printf("%d",max);
// } 
// -----------------------------------6.3
// #include<stdio.h>
// int main () {
//    int a, b, c,min;
//    scanf("%d %d %d", &a, &b, &c);
//    min=a;
//  if(b<min)
//    min=b;
//  if(c<min)
//    min=c;
//  printf("%d", min);
// } 
// ----------------------------------6.4   
// #include<stdio.h>
//  int main() {
//     float a, b, c;
//     scanf("%f %f %f", &a, &b, &c);
// if((a<b+c) && (b<a+c) && (c<b+a))
//     printf("CO");
// else
//     printf("KHONG");

// }
// ---------------------------------6.5
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main(){
//     double a, b, c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     double delta;
//     delta = b*b-4*a*c;
//     double x1, x2;
//     x1 = (-b-sqrt(delta))/(2*a);
//     x2 = (-b+sqrt(delta))/(2*a);
//     if (a == 0 && b!=0)
//         printf("%.2f", -c/b);
//     if (a == 0 && b==0)
//         printf("Vo nghiem");
//     if (a != 0 && delta<0)
//             printf("Vo nghiem");
//     if (a != 0 && delta>0){
//             printf("%.2f\n", x1);
//             printf("%.2f", x2);}
//     if (a != 0 && delta==0)
//             printf("%.2f", -b/2/a);
//     return 0;    
// }
// -------------------------------6.7
// #include <stdio.h>
// #include <math.h>
// int main() {
//  int t, n;
//  printf("");
//  scanf("%d", &t);
//  if(t<=1 || t<=12)
//   switch(t){
//   case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
//    printf("31"); break;
//   case 4: case 6: case 9: case 11:
//    printf("30"); break;
//   case 2:
//    printf("28 29");break;
//   }
//  else printf("Khong ton tai thang nay");
//  return 0;
// }
// ---------------------------------6.8
// #include<stdio.h>
// int main () {
//     float diem;
//     scanf("%f",&diem);
//     if (diem < 5 )
//     printf("Kem");
//     else if (diem < 7 && diem >=5)
//     printf("Trung binh");
//     else if (diem < 8 && diem >=7)
//     printf("Kha");
//     else if (diem < 9 && diem >=8)
//     printf("Gioi");
//     else if (diem <= 10 && diem >=9)
//     printf("Xuat sac");
//     else
//     printf("Nhap khong hop le");
// }
// -----------------------------------6.9
// #include<stdio.h>
// int main () {
//     float tuoi, namsinh, namnay;
//     scanf("%f %f",&namsinh,&namnay);
//     tuoi= namnay - namsinh;
//     if ( tuoi > 0 && tuoi <6)
//     printf("Tre em");

//     else if ( tuoi >= 6 && tuoi <11)
//     printf("Hoc sinh cap 1");

//     else if ( tuoi >= 11 && tuoi < 15)
//     printf("Hoc sinh cap 2");

//     else if ( tuoi >= 15 && tuoi < 18)
//     printf("Hoc sinh cap 3");

//     else if ( tuoi >= 18 && tuoi <40)
//     printf("Thanh nien");

//     else if (tuoi >= 40 && tuoi <60)
//     printf("Trung nien");

//     else if (tuoi >= 60 )
//     printf("Nguoi gia");

//     else
//     printf("Nhap sai");
// }