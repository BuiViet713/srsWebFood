// #include <stdio.h>

// int main () {
//     float a, b, c ;
//     printf ( "nhap canh tam giac a = ");
//     scanf( "%f",&a);
//      printf ( "nhap canh tam giac b = ");
//     scanf( "%f",&b);
//      printf ( "nhap canh tam giac c = ");
//     scanf( "%f",&c);
//     printf("chu vi %f\n", a+b+c);
//     return 0;
// }


// #include <stdio.h>
// int main () {
//     float r,h,s,v ;
//     printf("nhap ban kinh va chieu cao h = ");
//     scanf(" %f,%f", &r,&h);
//     s =2*3.14*r*h;
//     v =3.14*r*r*h;
//     printf(" S toan phan = %f\n, the tich = %f",s,v);
   
//     return 0;
// }

// #include<stdio.h>
// int main () {
//     char ten[100];
//     char quequan[100];
//     char gioitinh[100];
//     int namsinh;

//     printf("hay nhap ten cua ban:\n");
//     gets(ten);

//     printf("hay nhap que quan cua ban:\n");
//     gets(quequan);

//     printf("gioi tinh\n");
//     gets(gioitinh);

//     printf("nam sinh:");
//     scanf("%d",&namsinh);

   

//     printf("ten nam          que quan   nam sinh  gioitinh \n");
//     printf("%-17s%-11s%-10d%-8s \n", ten,quequan,namsinh,gioitinh);
//     return 0; 
    
// }





// #include<stdio.h>
// int main() {
//     int giay,phut,gio;
//     printf("Nhap giay: ");
//     scanf("%d",&giay);
//     gio=giay/3600;
//     giay=giay%3600;
//     phut=giay/60;
//     giay=giay%60;
//     printf("sau khi chuyen %02d:%02d:%02d ", gio,phut,giay);
// }
   

// #include <stdio.h>
// int main () {
//  float R,V, Pi=3.14;
//  printf("nhap ban kinh hih cau R= ");
//  scanf("%f",&R);
//  V=4*Pi*R*R*R*3;
//  printf("dien tich hinh cau = %.2f",V);
//  return 0;
// }

// #include<stdio.h>
// int main () {
//     int a;
//     printf("nhap 1 sos nguyen tu (1-100): ");
//     scanf("%d",&a);
//     printf("\\ %%%d \\\" \" \\ %%%d \\ \" \\ %%%d \\", a,a,a);
// }

// #include <stdio.h>
// int main () {
//     int sodien, giadien, giatien;
//     printf("nhap so dien: ");
//     scanf("%d",&sodien);
//     giadien=(sodien<=50) ? 500:(sodien<=100) ? 1000 : (sodien <151)? 1200:1600;
//     giatien=sodien*giadien;
//     printf("so dien tieu thu la: %d kwh\n",sodien);
//     printf("so tien phai tra la: %d $\n",giatien);
//     return 0;
// }

// #include <stdio.h>
// int main () {
//     int a, b, c;
//     a=1;
//     b=2;
//     c=3;
//     // printf(" nhap a,b,c=");
//     // scanf("%d,%d,%d",&a,&b,&c);

//     int max=(a>b) ? (a>c) ? a :  (b>c) ?  b:c;
//     // int min= (a<b) ? b : (b<c) ? c : (c<b) ? b:a;

//     // printf("min=%d\n",min);
//     printf("max=%d \n",max);
// }


// #include <stdio.h>
// int main () {
//     float diem, tienthuong ;
//     printf ("nhap so diem la = ");
//     scanf("%f",&diem);
//     tienthuong = (diem < 5) ? 0 : (diem < 6.5) ? 1 : (diem < 8) ? 2 : 3;
//     printf("%f",tienthuong);
// }


// #include <stdio.h>
// int main () {
//     int a;
//     printf(" nhap so = ");
//     scanf("%d", &a);
//     if (a%2 ==0 )
//         printf("so %d chia het cho 2\n",a);
//     else 
//         printf("so %d khong chia het cho 2 \n",a);
    
//     if (a%4 == 0 )
//         printf("so %d chia het cho 4\n",a);
//     else 
//         printf("so %d khong chia het cho 4 \n",a);

// return 0;
// }

// #include <stdio.h>

// int main() {

//           int a, b, c, min, max;
//           printf("Nhap so thu nhat: ");
//           scanf("%d", &a);
//           printf("Nhap so thu hai: ");
//           scanf("%d", &b);
//           printf("Nhap so thu ba: ");
//           scanf("%d", &c);
//           min=max=a;
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

// }

// #include <stdio.h>
// int main () {
//     float diem, thuong;
//     printf ("nhap so diem = ");
//     scanf("%f",&diem);
//     if (diem >= 8) 
//         printf("hoc sinh gioi");
//     else if ( 8<= diem && diem >5)
//         printf("hoc sinh kha");
//     else 
//     printf("hoc sinh trung binh");
    
// }


// #include <stdio.h>
// int main (){
// int n, hangtram, hangchuc, hangdv;
// printf ("nhap so vao day = ");
// scanf("%d", &n);
// hangtram = n / 100;
// hangchuc = (n - hangtram*100)/10;
// hangdv = n % 10;
// switch (hangtram){
// case 1: printf("mot tram "); break;
// case 2: printf("hai tram "); break;
// case 3: printf("ba tram "); break;
// case 4: printf("bon tram "); break;
// case 5: printf("nam tram "); break;
// case 6: printf("sau tram "); break;
// case 7: printf("bay tram "); break;
// case 8: printf("tam tram "); break;
// case 9: printf("chin tram "); break;
// }
// switch (hangchuc){
// case 0: printf("linh "); break;
// case 1: printf("muoi "); break;
// case 2: printf("hai muoi "); break;
// case 3: printf("ba muoi "); break;
// case 4: printf("bon muoi "); break;
// case 5: printf("nam muoi "); break;
// case 6: printf("sau muoi "); break;
// case 7: printf("bay muoi "); break;
// case 8: printf("tam muoi "); break;
// case 9: printf("chin muoi "); break;
// }
// switch (hangdv){
// case 1: printf("mot"); break;
// case 2: printf("hai"); break;
// case 3: printf("ba"); break;
// case 4: printf("bon"); break;
// case 5: printf("lam"); break;
// case 6: printf("sau"); break;
// case 7: printf("bay"); break;
// case 8: printf("tam"); break;
// case 9: printf("chin"); break;
// }
// printf("\n");
// return 0;
// }
// #include <stdio.h>
// int main() {
//     char c;
//     scanf("%c",&c);
//     if (c=='q' || c=='w' || c=='r' || c=='t'
//         c=='Q' || c=='W' || c=='R' || c=='T')
//         {printf("phu am\n"); }
//     else if (c=='a' || c=='e' || c=='u' || c=='i' || c=='o')
//              c=='A' || c=='E' || c=='U' || c=='I' || c=='O')
//     {printf("nguyen am \n");}
//     else if (c=='')
//     {
//         /* code */
//     }  
// }


// #include <stdio.h>
// int main()
// {
// 	int a, n;
// 	printf("Nhap bang cuu chuong: ");
// 	scanf("%d", &n);
// 	for(a=1; a<=20; a++)
// 		printf("%d x %d = %d\n", n, a, a*n);
// 	return 0;
// }

// #include <stdio.h>  
// int main()
// {
// 	int  n;
// 	printf("Nhap: ");
// 	scanf("%d", &n);
// 	for (int i = 1;i <= n;++i){
//         if(n % i == 0) { 
//             printf("%d\n",i); }
// }
// }

// #include <stdio.h>

// int main(){
//     int a,b,uc;
//     printf("Nhap a,b: ");
//     scanf("%d%d",&a,&b);
//     for (uc=a;uc>=1;uc--){
//         if (a%uc==0 && b%uc==0){
//             printf("UC(%d,%d)=%d\n",a,b,uc);     
//         }
//     }
//     return 0;
// }
//  #include<stdio.h>
//   int main() {
// 	  int n;
//     scanf("%d", &n);
//     for (int i = 0; i <= n/3; i+=2) {
//         if (i % 3 == 0 ) {
//             printf("%d\n ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<1)
//         printf("nhap sai yeu cau nhap lai");
//     else {
//         for (int i=1;i<=n;++i) 
//           {  for (int a=1;a<=10;++a)
//               { printf("%d",i);}}
//          printf("\n\n");
// 		 }
// return 0;
// }


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

// #include <stdio.h>
// #include <math.h>
// int main(){ 
// int dem;
// int n;
// scanf("%d", &n);
// for (int i=3;i<n;i=i+3 ){
//     int dv ,tram , chuc;
//     tram = i /100;
//     chuc = (i- tram*100)/10;
//     dv = i%10;
//     if (tram + dv == chuc) {
//     printf ("%d ",i);
//     dem = dem +1;}
//     if (dem == 10){
//     printf ("\n");
//     dem =0;}
// }
//     return 0;
// }

// #include<stdio.h>
//  int main() {
// 	int a,b,c,d,dem=0,i;
// 	scanf("%d %d %d %d",&a,&b,&c,&d);
// 	for( int i=a;i<=b;++i){
// 		 if(i%2==0)
// 		 dem+=1;
// 	}
// 	for (int i=c;i<=d;++i){
// 		 if (i%2==0)
// 		 dem+=1;
// 	}
// 	printf("so luong = %d\n",dem);
//  return 0;
//  }

// #include <stdio.h>
// int main (){
//    int n;
//    scanf("%d", &n);
//    int tong1 = 0, tong2=0;
//    	for(int i = 0; i <= n; i+=2){
// 	  if (i % 3==0)
// 	    tong1+=i;	   
// 	  if( i%7==0)
// 	    tong2+=i;
//    }
//    printf("tong1=%d tong2=%d\n",tong1,tong2);
//    if (tong1>tong2)
// 	printf("tong1 lon tong2");
// 	else if (tong1<tong2)
// 	printf("tong1 be hon tong2");
// 	else if (tong1 == tong2 )
// 	printf("tong1 bang tong2");
// }

// #include<stdio.h>
// int main () {
//     int s=0,i;
//     char n;
//     do {
//         scanf(" %d",&n);
//         if (n<=10 || n>=100) printf("nhap lai\n");
//         else 
//          for (i=1;i<=n;++i)
//          {
//              s+=i;
//          }
//     }
//     while (n<=10 || n>= 100);
    
//      printf("tong = %d",s);
// }



// #include <stdio.h>

// int main(){
//     int a,b,uc,bc;
//     printf("Nhap (a,b): ");
//     scanf("%d%d",&a,&b);
//     for (uc=a;uc>=1;uc--){
//         if (a%uc==0 && b%uc==0){
//             printf("UCLN(%d,%d)=%d\n",a,b,uc);
//             break;
//         }
//     }
//     for (bc=a;bc<=a*b;bc++){
//         if (bc%a==0 && bc%b==0){
//             printf("BCNN(%d,%d)=%d\n",a,b,bc);
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int sochinhphuong(int a, int b){
//     int i;
//     for(int i=1;i<=b;i++){
//         if(i*i>=a&&i*i<=b){
//             printf("%d ",i*i);
//         }
//     }
// }
// int kiemtra_snt(int a, int b){
//     int i,n;
//     for(n=a;n<=b;n++){
//         for(i=2;i<=n;i++){
//             if(n%i==0){
//                 break;
//             }
//             printf("%d ",n);
//             break;
//         }
//     }
// }

// int soNguyenTo(int soA){
//     if (soA < 2)    
//         return 0;
//     for (int i = 2; i <soA; i++)
//     {
//         if (soA%i==0)
//             return 0;
//     }
//     return 1;
// }
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     sochinhphuong(a,b);
//     printf("\n");
//     soNguyenTo(a,b);
//     // kiemtra_snt(a,b);
// }
#include<stdio.h>

int nhap_socheck(){
    int a;
      do {
        printf("nhap so = ");
        scanf(" %d",&a);
        if (a<=0) 
            {printf("hay nhap lai");}
     } while (a<=0);
}

void tong_uoc_so_chan(int n) {
    int s=0;
    for ( int i=1;i<=n;i++){
     if (n%i==0){
        if (i%2==0){
            printf("%4d\n",i);
            s=s+i;
        }
     } 
    }
    printf("tong cac uc chan cua c la %d ",s);
}

 int main() {
    int a=nhap_socheck();
     tong_uoc_so_chan(a);

 }
 