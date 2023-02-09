#include <stdio.h>  
#include <string.h> 
typedef struct quanlykhohang{
    char ten[100],ma[10];
    int soluong,gia,hansd;
}kh;
void input(kh khohang[],int *n){
    int i=0;
    char x;
    do{
    printf("Nhap ten hang: ");
        gets(khohang[i].ten);
    printf("    Nhap ma hang: "); 
        gets(khohang[i].ma);
    printf("    Nhap so luong: ");
        do{
        scanf("%d",&khohang[i].soluong); 
        }while(khohang[i].soluong<0);
    printf("    Nhap gia: "); 
        do{
            scanf("%d",&khohang[i].gia);
        }while(khohang[i].gia<0);
    printf("    Nhap han sd: ");    
        do{
            scanf("%d",&khohang[i].hansd); 
        }while(khohang[i].hansd<0); 
        printf("    Ban co muon nhap tiep khong: "); 
        do{
            getchar();
            scanf("%c",&x); 
        }while(x!='n' && x!='N' && x!='y' && x!='Y');
        getchar();
        i++;
    }while(x=='y' || x=='Y');
    *n=i;
}
void inthongtin(kh khohang){
    printf("%s | %s | %d | %d | %d\n",khohang.ten,khohang.ma,khohang.soluong,khohang.gia,khohang.hansd); 
}
void inthongtin_all(kh khohang[],int n){
    for(int i=0;i<n;i++){
        inthongtin(khohang[i]);
    } 
}
void gia_caonhat(kh khohang[],int n){
    int caonhat=khohang[0].gia;
    for(int i=1;i<n;i++){
        if(caonhat<khohang[i].gia){
            caonhat=khohang[i].gia;
        }
    } 
    printf("San pham co gia cao nhat la:\n"); 
    for(int i=0;i<n;i++){
        if(caonhat==khohang[i].gia){
            inthongtin(khohang[i]);
        }
    } 
}
void sapxep_hansd(kh khohang[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(khohang[i].hansd>khohang[j].hansd){
                kh temp = khohang[i];
                khohang[i]=khohang[j];
                khohang[j]=temp; 
            }
        } 
    } 
}
void ganhet_hansd(kh khohang[],int n){
    int x;
    printf("Nhap so luong san pham gan het han: "); 
    scanf("%d",&x); 
    printf("%d san pham gan het han sd la:\n",x); 
    for(int i=0;i<x;i++){
        inthongtin(khohang[i]);
    } 
}
int main(){ 
    int n;
    kh khohang[100];
    input(khohang,&n); 
    gia_caonhat(khohang,n);
    sapxep_hansd(khohang,n);
    ganhet_hansd(khohang,n);
}