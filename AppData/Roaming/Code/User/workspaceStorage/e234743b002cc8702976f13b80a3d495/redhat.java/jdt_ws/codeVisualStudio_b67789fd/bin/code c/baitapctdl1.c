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
// void sx_giamdan(int a[], int n){
//     int tongto=0;
//     int tongbe=0;
//     for (int i=0; i<n-1; i++){
//         for (int j=i+1; j<n; j++){
//             if(a[i]<a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//      for(int i=0; i<n ;i++){
//         printf ("%d ", a[i]);
        
//     }
//     printf("\n");
//     for(int i=n-1; i>0 ;i--){
//         tongbe+=a[i]; 
//     }
//     for(int i=0; i<n-1 ;i++){
//         tongto+=a[i];
//         }
//     printf("tong 4 so be nhat = %d\n",tongbe);
//     printf("tong 4 so to nhat = %d\n",tongto);
//     }
// void CountX(int a[], int n){
//     int countduong=0;
//     int countam=0;
//     int countkhong=0;
//     int tileam=1, tileduong=1, tileo=1;
     
//     for(int i=0;i<n;i++){
//         if(a[i]>0) countduong ++;
//         if(a[i]<0) countam++;
//         if(a[i]=0) countkhong++;
//     }
//     tileam=countam/n;
//     tileduong=countduong/n;
//     tileo=countkhong/n;
    
//     printf("%d %d %d",tileam,tileduong,tileo);
// }
// int main (){
//     int n;
//     printf("nhap n phan tu :");
//     scanf ("%d", &n);
//     int a[n];
//     nhapmang(a,n);
//     inmang(a,n);
//     CountX(a,n);
//     // sx_giamdan(a,n);
// }

// #include<stdio.h>
// typedef struct _listnode{
//     int num;
//     struct _listnode *next;
//     }
// ListNode;

// // chen mot nut o dau danh sach
// void insert_begin(ListNode **ptrHead, int x){
//     ListNode *newNode;
//     newNode = malloc(sizeof(ListNode));
//     newNode->num = x;
//     newNode->next = *ptrHead;
//     *ptrHead = newNode;

// //xoa mot not o dau danh sach
// void remove_begin(ListNode **ptrHead){
//     ListNode *q;
//     if(*ptrHead == NULL) return;
//     q = *ptrHead;
//     *ptrHead = q->next;
//     q->next = NULL;
//     free(q);
// }

// //duyet danh sach
// void Traverser(ListNode *head){
//     printf("\n");
//     for(ListNode *p=head;p!=NULL;p=p->next){
//     printf("%3d ",p->num);
//     }
//     printf("\n");
// }

// int main (){
//     insert_begin(ptrHead);
//     remove_begin(ptrHead);
//     Traverser(ptrHead);
// }




// 5



    
#include<stdio.h>
#include<stdlib.h>
typedef struct _listnote // tạo  ds lien ket
    {
        int num;
        struct _listnote *pnext;
    }ListNote;
void Traverser(ListNote *head){ // ham duyet va in ra man hinh bang cach khai bao dia chi vung nho dau tien
    printf("\n");
    
    for(ListNote *p = head; p != NULL ; p = p->pnext){
    printf("%2d",p->num);
    }
}   

    
int main(){
    printf("khoi tao danh sach lien ket 1: \n"); 

    int n ; 
    do {
        printf("nhap n : "); 
        scanf ("%d",&n);
    }while(n<=0);
    ListNote *note_moi , *pHead;
note_moi = malloc(sizeof(ListNote));
pHead = note_moi;
for (int i = 1; i < n; i++)
{
    printf("nhap phan tu thu %d : ",i);
    scanf("%d",&note_moi->num);
    note_moi->pnext= malloc(sizeof(ListNote)); 
    note_moi = note_moi->pnext;  
}
    printf("nhap phan tu thu %d : ",n);
    scanf("%d",&note_moi->num);
    note_moi->pnext = NULL;
    int n1 ; 
    printf("khoi tao danh sach lien ket 2:\n"); 
    do {
    printf("nhap n1 : "); 
    scanf ("%d",&n1);
    }while(n<=0);
    ListNote *note_moi1 , *pHead1;
    note_moi1 = malloc(sizeof(ListNote));
    pHead1 = note_moi1;
    for (int i = 1; i < n; i++)
    {
    printf("nhap phan tu thu %d : ",i);
    scanf("%d",&note_moi1->num);
    note_moi1->pnext= malloc(sizeof(ListNote)); 
    note_moi1 = note_moi->pnext;  
}
    printf("nhap phan tu thu %d : ",n);
    scanf("%d",&note_moi->num);
    note_moi->pnext = NULL;
ListNote *pHead2;
if(pHead->num <= pHead1->num){
    note_moi->pnext = pHead1;
    pHead2 = pHead;
}else{
    note_moi1->pnext = pHead;
    pHead2 = pHead1;
}

Traverser(pHead2);

return 0;

    }