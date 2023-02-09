// #include <stdio.h>
// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; ++i){
//         printf("\nNhap phan tu a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }
// void inmang(int a[], int n){
//     for (int i=0;i<n;++i){
//         printf("%d ",a[i]);}
//     printf("\n");
// }
// void sx_tangdan(int a[],int n){
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
// int main () {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     NhapMang(a,n);
//     inmang(a,n);
//     sx_tangdan(a,n);

// }



#include <stdio.h>

void nhapmang (int a[],int n){
    for (int i=0; i<n; i++){
        printf ("nhap phan tu a[%d]= ",i);
        scanf ("%d",&a[i]); 
    }
}
void inmang(int a[], int n){
    for (int i=0; i<n; i++){
        printf ("%d ",a[i]);
    }
    printf("\n");
}
void sx_giamdan(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0; i<n ;i++){
        printf ("%d ", a[i]);
        
    }
    printf("\n");
    }
void max(int a[],int n){
    int max=0;
    for (int i=0;i<n;++i){
        max=a[0];
        if (max <a[i]){
            max=a[i];
        }
    
    }
    printf("%d",max);
}
int main (){
    int n;
    scanf ("%d", &n);
    int a[n];
    nhapmang(a,n);
    inmang(a,n);
    sx_giamdan(a,n);
    max(a,n);
}