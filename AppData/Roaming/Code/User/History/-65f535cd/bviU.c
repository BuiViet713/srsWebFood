#include<stdio.h>
#include<stdlib.h>

// khai báo danh sách liên kết - kiểu dữ liệu struct(SinhVien,CanBo,...)
struct dslk1{
    int data;
    struct dslk1*next;   
};

// tạo mới 1 note
// typedef định nghĩa một kiểu dữ liệu trong c
// malloc hàm cấp bộ nhớ của c
// sizeof hàm trả về kích thước của kiểu dữ liệu 

typedef struct dslk*node; // thay kiểu dữ liệu dslk thay bằng note cho ngắn gọn
node CreateNode(int value){
    node temp;
    temp=(node)malloc(sixeof(struct dslk));// cấp phát vùng nhớ
    temp->next=NULL;// cho next chỉ tới giá trị null
    temp->data=value; //gắn giá trị cho node
    return temp;// trả về node mới  có giá trị 
}

// thêm node vào danh sách liên kết
node AddHear( node head, int value)
    node temp = CreateNode(value);
    if(head == NULL){
        head = temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    return head;

node AddAt(node head, int value, int position){
    if(position == 0 || head == NULL){
        head = AddHead(head, value); // Nếu vị trí chèn là 0, tức là thêm vào đầu
    }else{
        // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
        int k = 1;
        node p = head;
        while(p != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // Nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định chèn cuối
            // Nếu bạn không muốn chèn, hãy thông báo vị trí chèn không hợp lệ
            head = AddTail(head, value);
            // printf("Vi tri chen vuot qua vi tri cuoi cung!\n");
        }else{
            node temp = CreateNode(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;
}
void Traverser(node head){
    printf("\n");
    for(node p = head; p != NULL; p = p->next){
        printf("%5d", p->data);
    }
}

int main (){
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
    Traverser(head);
 
    printf("\n==Thu them 1 phan tu vao linked list==");
    head = AddAt(head, 100, 2);
    Traverser(head);
}
