
#include <conio.h>
#include <stdio.h>
#include <malloc.h>
//Khai bao cay nhi phan
typedef char TData;
typedef struct TNode{
 TData  Data;
 TNode* left;
 TNode* right;
};
typedef TNode* TTree;
/*=== Tao cay rong ===*/
void MakeNull_Tree(TTree *T)
{
 (*T)=NULL;
}
/*=== Kiem tra cay rong ===*/
int EmptyTree(TTree T)
{
 return T==NULL;
}
/*=== Xac dinh con trai ===*/
TTree LeftChild(TTree T)
{
 if(T != NULL)
	return T->left;
 else   return NULL;
}
/*=== Xac dinh con phai ===*/
TTree RightChild(TTree T)
{
 if(T != NULL)
	return T->right;
 else   return NULL;
}
/*=== Xac dinh nut la ===*/
int isLeaf(TTree T)
{
  if((T != NULL) && (T->left == NULL) && (T->right == NULL))
	return 1;
  else  return NULL;
}
/*=== Xac dinh so nut cua cay ===*/
int nb_nodes(TTree T)
{
 if(EmptyTree(T))
	return 0;
 else   return nb_nodes(T->left)+nb_nodes(T->right)+1;
}

// Ham xac dinh gia tri lon nhat trong hai so nguyen

int max(int value1,int value2)
{
	return ((value1 > value2) ? value1: value2);    //xac dinh gia tri lon nhat trong 2 gia tri so nguyen
}

// Ham xac dinh chieu cao cua cay

int TreeHeight(TTree T)
{
	int height=0;
	if (!EmptyTree(T))
	{
		if (isLeaf(T))
		return 0;
		else
		height = max(TreeHeight(LeftChild(T)),TreeHeight(RightChild(T)))+1;
	}
	return height;
}

// Ham xac dinh so nut la tren cay

int nb_leaf(TTree T)
{
	int leaf=0;
	if(!EmptyTree(T))
	{
		if (isLeaf(T))
		  leaf++;
		else
		leaf = nb_leaf(LeftChild(T))+nb_leaf(RightChild(T));
	};
	return leaf;
}

/*=== Tao cay moi tu hai cay co san ===*/
TTree Create2(TData v,TTree left,TTree right)
{
  TTree N; // Khai bao 1 cay moi
  N       = (TNode*)malloc(sizeof(TNode)); //Cap phat vung nho cho nut N
  N->Data = v; // Nhan cua nut N la v
  N->left = left; //Con trai cua N la cay left
  N->right = right; //Con phai cua N la cay right
  return N;
}
/*=== Duyet cay nhi phan ===*/
//Duyet tien tu
void NLR(TTree T)
{
  if(!EmptyTree(T))
  {
   printf(" %c",T->Data); //Xu ly nut
   NLR(LeftChild(T)); //Duyet tien tu con trai
   NLR(RightChild(T)); //Duyet tien tu con phai
  }
}
//Duyet trung tu
void LNR(TTree T)
{
 if(!EmptyTree(T))
 {
  LNR(LeftChild(T)); //Duyet trung tu con trai
  printf(" %c",T->Data);//Xu ly nut
  LNR(RightChild(T));//Duyet trung tu con phai
  }
}
//Duyet hau tu
void LRN(TTree T)
{
 if(!EmptyTree(T))
 {
  LRN(LeftChild(T)); //Duyet hau tu con trai
  LRN(RightChild(T));//Duyet hau tu con phai
  printf(" %c",T->Data);//Xu ly nut
  }
}