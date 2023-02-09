#include <stdio.h>  
#include<string.h> 
void input (char a[],int *n){
    int demso,demkitu;
    do{
        gets(a);
        *n=strlen(a);
        demso=0,demkitu=0;
        for(int i=0;i<*n;i++){
            if(a[i]<48 || a[i]>57 && a[i]<65 || a[i]>90 && a[i]<97 || a[i]>122){
                demkitu++;
            }
        } 
        for(int i=0;i<*n;i++){
            if(a[i]>=48 && a[i]<=57){
                demso++;
            }
        } 
    }while(*n<6 || demso==0 || demkitu==0 || a[0]!='P');
}
void remover(char a[],int *n){
    for(int i=0;i<*n;i++){
        if(a[i]<48 || a[i]>57 && a[i]<65 || a[i]>90 && a[i]<97 || a[i]>122){
            for(int j=i;j<*n;j++){
                a[j]=a[j+1];
            } 
             i-=1;
            *n-=1;
        }
    } 
}
int main(){
    int n;char a[100];
    input(a,&n);
    remover(a,&n);
    for(int i=0;i<n;i++){
        printf("%c",a[i]); 
    } 
}