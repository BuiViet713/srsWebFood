#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _listnode
{
    int num;
    struct _listnode*next;
 }ListNode;

void Traverser(ListNode *head){
    printf("\n");
    for(ListNode *p =head;p!=NULL;p=p->next){
        printf("%5d",p->num);
    }

}

int main()
{
    int n;
    do{
        printf("Nhap n:");
        scanf("%d",&n);
    }while(n<=0);
    ListNode *newNode, *head;
    newNode = malloc(sizeof(ListNode));
    head = newNode;
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
}
