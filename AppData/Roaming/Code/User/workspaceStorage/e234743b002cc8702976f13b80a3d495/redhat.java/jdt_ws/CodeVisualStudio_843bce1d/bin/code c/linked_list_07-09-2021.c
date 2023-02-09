#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _listnode
{
    int num;
    struct _listnode *next;
}ListNode;

//duyet va in ra danh sach
void Traverser(ListNode *head){
    printf("\n");
    for(ListNode *p=head;p!=NULL;p=p->next){
        printf("%3d ",p->num);
    }
    printf("\n");
}

//them mot not vao dau danh sach
void insert_begin(ListNode **ptrHead, int x){
    ListNode *newNode;
    newNode = malloc(sizeof(ListNode));
    newNode->num = x;
    newNode->next = *ptrHead;
    *ptrHead = newNode;
}

//them mot not vao cuoi danh sach
void insert_end(ListNode **ptrHead, int x)
{
    ListNode *newNode;
    newNode = malloc(sizeof(ListNode));
    newNode->num = x;
    newNode->next = NULL;
    if(*ptrHead==NULL){
        *ptrHead = newNode;
    }else{
        ListNode *last = *ptrHead;
        while(last->next!=NULL) last = last->next;
        last->next = newNode;
    }
    return;
}

//them mot not vao sau mot not o vi tri position
void insert_middle(ListNode **ptrHead, int position, int x){
    int count =1;
    bool found = false;
    ListNode *newNode;
    ListNode *r = *ptrHead;
    while(r != NULL && !found ){
        if(count == position){
            newNode = malloc(sizeof(ListNode));
            newNode->num = x;
            newNode->next = r->next;
            r->next = newNode;
            found = true;
        }
        count++;
        r=r->next;
    }
    if(!found) printf("Khong tim that vi tri can chen!\n");
}

//xoa mot not o dau danh sach
void remove_begin(ListNode **ptrHead){
    ListNode *q;
    if(*ptrHead == NULL) return;
    q = *ptrHead;
    *ptrHead = q->next;
    q->next = NULL;
    free(q);
}

//xoa not o cuoi danh sach
void remove_end(ListNode **ptrHead){
    ListNode *q,*r;
    if(*ptrHead==NULL) return;
    if((*ptrHead)->next==NULL) {
        remove_begin(ptrHead);
        return;
    }
    r = *ptrHead;
    while(r->next!=NULL){
        q=r;
        r=r->next;
    }
    q->next=NULL;
    free(r);
}

//xoa mot not o giua danh sach
void remove_middle(ListNode **ptrHead, int position){
    int count = 1;
    bool found =false;
    ListNode *q,*r;
    r=*ptrHead;
    while(r!=NULL && !found){
        if(count == position){
            q=r->next;
            r->next = q->next;
            q->next = NULL;
            free(q);
            found = true;
        }
        count++;
        r=r->next;
    }
    if(!found)printf("Khong tim that vi tri can xoa!\n");
}

//lay gia tri cua phan tu o vi tri index. Neu tim thay gia tri o vi tri index, luu gia tri vao bien value va tra ve true
// neu khong tim thay, tra ve false
bool get_value(ListNode **ptrHead, int index, int *value){
    int k=0;
    bool found = false;
    ListNode *p = *ptrHead;

        while(p!=NULL){
            if(k==index){
                found = true;
                *value = p->num;
                break;
            }
            k++;
            p=p->next;
        }


    return found;
}

//tim kiem thu tu cua phan tu co gia tri value. Neu khong tim thay value trong danh sach, tra ve gia tri -1
int get_index(ListNode **ptrHead, int value){
    ListNode *p = *ptrHead;
    int index =0;
    bool found = false;

        while(p!=NULL){
            if(p->num == value){
                found = true;
                return index;

            }
            p=p->next;
            index++;
        }

    return -1;
}

int main(){
    int n;
    //nhap vao do dai cua danh sach voi n>0
    do{
        printf("Nhap n:");
        scanf("%d",&n);
    }while(n<=0);

    //khoi tao danh sach co do dai n
    ListNode *newNode, *head=NULL, **ptrHead=NULL; //con tro ptrHead tro den o nho cua bien head va no co tac dung de thay doi gia tri cua bien head khi truyen vao function
    newNode = malloc(sizeof(ListNode));
    head = newNode;
    ptrHead = &head;
    //free(head); //giai phong vung nho cua bien head

    for(int i=1;i<n;i++){
        printf("Nhap phan tu thu %d:",i);
        scanf("%d",&newNode->num);
        newNode->next = malloc(sizeof(ListNode));
        newNode = newNode->next;
    }
    printf("Nhap phan tu thu %d:",n);
    scanf("%d",&newNode->num);
    newNode->next = NULL;
    printf("Finished!\n");


    Traverser(head);

    //test cac ham them phan tu vao danh sach
    insert_begin(ptrHead,0);
    Traverser(head);
    insert_end(ptrHead,4);
    Traverser(head);
    insert_middle(ptrHead,2,5);
    Traverser(head);

    //test cac ham xoa phan tu cua danh sach
    remove_begin(ptrHead);
    Traverser(head);
    remove_end(ptrHead);
    Traverser(head);
    remove_middle(ptrHead,1);
    Traverser(head);

    //lay gia tri cua phan tu o vi tri bat ky
    int position, x;
    printf("nhap vi tri muon lay gia tri:");
    scanf("%d",&position);
    if(get_value(ptrHead,position,&x)){
        printf("Gia tri can tim la: %d\n",x);
    }else{
        printf("Khong tim thay gia tri!\n");
    }

    //tim vi tri cua phan tu co gia tri value
    int value;
    printf("nhap gia tri muon tim kiem:");
    scanf("%d",&value);
    int index = get_index(ptrHead,value);
    if(index>=0){
        printf("Vi tri can tim la: %d\n",index);
    }else{
        printf("Khong tim thay vi tri!\n");
    }
}


